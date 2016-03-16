// -*- C++ -*-
/*
 * Your header here.
 */
//@@{__RIDL_REGEN_MARKER__} - HEADER_END : shapes_sender_impl.cpp[Header]

#include "shapes_sender_exec.h"

//@@{__RIDL_REGEN_MARKER__} - BEGIN : sender_Impl[user_includes]
#include <ciao/testlib/ciaox11_testlog.h>
//@@{__RIDL_REGEN_MARKER__} - END : sender_Impl[user_includes]

//@@{__RIDL_REGEN_MARKER__} - BEGIN : sender_Impl[user_global_impl]
// Your declarations here
//@@{__RIDL_REGEN_MARKER__} - END : sender_Impl[user_global_impl]

namespace sender_Impl
{
  //@@{__RIDL_REGEN_MARKER__} - BEGIN : sender_Impl[user_namespace_impl]
  class TT_Callback final
    : public IDL::traits<CCM_TT::TT_Handler>::base_type
  {
  public:
    TT_Callback (IDL::traits< CCM_sender_Context >::ref_type context,
                 DDS::InstanceHandle_t instance_handle,
                 ShapeType& square)
      : context_ (std::move (context)),
        instance_handle_ (std::move (instance_handle)),
        square_ (square) {}

    virtual
    void
    on_trigger (
        IDL::traits< ::CCM_TT::TT_Timer>::ref_type timer,
        const ::CCM_TT::TT_Duration& time,
        uint32_t round) override;

  private:
    IDL::traits<CCM_sender_Context >::ref_type context_;
    DDS::InstanceHandle_t instance_handle_;
    ShapeType square_;
  };

  void
  TT_Callback::on_trigger (
      IDL::traits< ::CCM_TT::TT_Timer>::ref_type,
      const ::CCM_TT::TT_Duration&,
      uint32_t)
  {
    IDL::traits< ::ShapeTypeInterface::Writer>::ref_type writer =
      this->context_->get_connection_shape_data ();

    writer->write_one (this->square_, this->instance_handle_);

    ++this->square_.x ();
    ++this->square_.y ();

    CIAOX11_TEST_INFO
      << "Updated "
      << IDL::traits< ShapeType>::write (this->square_)
      << std::endl;
  }
  //@@{__RIDL_REGEN_MARKER__} - END : sender_Impl[user_namespace_impl]

  /**
   * Facet Executor Implementation Class : connector_status_ShapeType_exec_i
   */

  //@@{__RIDL_REGEN_MARKER__} - BEGIN : sender_Impl::connector_status_ShapeType_exec_i[ctor]
  connector_status_ShapeType_exec_i::connector_status_ShapeType_exec_i (
    IDL::traits< CCM_sender_Context >::ref_type context)
    : context_ (std::move (context))
  {
  }
  //@@{__RIDL_REGEN_MARKER__} - END : sender_Impl::connector_status_ShapeType_exec_i[ctor]

  connector_status_ShapeType_exec_i::~connector_status_ShapeType_exec_i ()
  {
    //@@{__RIDL_REGEN_MARKER__} - BEGIN : sender_Impl::connector_status_ShapeType_exec_i[dtor]
    // Your code here
    //@@{__RIDL_REGEN_MARKER__} - END : sender_Impl::connector_status_ShapeType_exec_i[dtor]
  }

  /** User defined public operations. */
  //@@{__RIDL_REGEN_MARKER__} - BEGIN : sender_Impl::connector_status_ShapeType_exec_i[user_public_ops]
  // Your code here
  //@@{__RIDL_REGEN_MARKER__} - END : sender_Impl::connector_status_ShapeType_exec_i[user_public_ops]

  /** User defined private operations. */
  //@@{__RIDL_REGEN_MARKER__} - BEGIN : sender_Impl::connector_status_ShapeType_exec_i[user_private_ops]
  //@@{__RIDL_REGEN_MARKER__} - END : sender_Impl::connector_status_ShapeType_exec_i[user_private_ops]


  /** Operations and attributes from connector_status_ShapeType */

  void
  connector_status_ShapeType_exec_i::on_inconsistent_topic (
      IDL::traits< ::DDS::Topic>::ref_type the_topic,
      const ::DDS::InconsistentTopicStatus& status)
  {
    //@@{__RIDL_REGEN_MARKER__} - BEGIN : sender_Impl::connector_status_ShapeType_exec_i::on_inconsistent_topic[_the_topic_status]
    X11_UNUSED_ARG(the_topic);
    X11_UNUSED_ARG(status);
    //@@{__RIDL_REGEN_MARKER__} - END : sender_Impl::connector_status_ShapeType_exec_i::on_inconsistent_topic[_the_topic_status]
  }

  void
  connector_status_ShapeType_exec_i::on_requested_incompatible_qos (
      IDL::traits< ::DDS::DataReader>::ref_type the_reader,
      const ::DDS::RequestedIncompatibleQosStatus& status)
  {
    //@@{__RIDL_REGEN_MARKER__} - BEGIN : sender_Impl::connector_status_ShapeType_exec_i::on_requested_incompatible_qos[_the_reader_status]
    X11_UNUSED_ARG(the_reader);
    X11_UNUSED_ARG(status);
    //@@{__RIDL_REGEN_MARKER__} - END : sender_Impl::connector_status_ShapeType_exec_i::on_requested_incompatible_qos[_the_reader_status]
  }

  void
  connector_status_ShapeType_exec_i::on_sample_rejected (
      IDL::traits< ::DDS::DataReader>::ref_type the_reader,
      const ::DDS::SampleRejectedStatus& status)
  {
    //@@{__RIDL_REGEN_MARKER__} - BEGIN : sender_Impl::connector_status_ShapeType_exec_i::on_sample_rejected[_the_reader_status]
    X11_UNUSED_ARG(the_reader);
    X11_UNUSED_ARG(status);
    //@@{__RIDL_REGEN_MARKER__} - END : sender_Impl::connector_status_ShapeType_exec_i::on_sample_rejected[_the_reader_status]
  }

  void
  connector_status_ShapeType_exec_i::on_offered_deadline_missed (
      IDL::traits< ::DDS::DataWriter>::ref_type the_writer,
      const ::DDS::OfferedDeadlineMissedStatus& status)
  {
    //@@{__RIDL_REGEN_MARKER__} - BEGIN : sender_Impl::connector_status_ShapeType_exec_i::on_offered_deadline_missed[_the_writer_status]
    X11_UNUSED_ARG(the_writer);
    X11_UNUSED_ARG(status);
    //@@{__RIDL_REGEN_MARKER__} - END : sender_Impl::connector_status_ShapeType_exec_i::on_offered_deadline_missed[_the_writer_status]
  }

  void
  connector_status_ShapeType_exec_i::on_offered_incompatible_qos (
      IDL::traits< ::DDS::DataWriter>::ref_type the_writer,
      const ::DDS::OfferedIncompatibleQosStatus& status)
  {
    //@@{__RIDL_REGEN_MARKER__} - BEGIN : sender_Impl::connector_status_ShapeType_exec_i::on_offered_incompatible_qos[_the_writer_status]
    X11_UNUSED_ARG(the_writer);
    X11_UNUSED_ARG(status);
    //@@{__RIDL_REGEN_MARKER__} - END : sender_Impl::connector_status_ShapeType_exec_i::on_offered_incompatible_qos[_the_writer_status]
  }

  void
  connector_status_ShapeType_exec_i::on_unexpected_status (
      IDL::traits< ::DDS::Entity>::ref_type the_entity,
      ::DDS::StatusKind status_kind)
  {
    //@@{__RIDL_REGEN_MARKER__} - BEGIN : sender_Impl::connector_status_ShapeType_exec_i::on_unexpected_status[_the_entity_status_kind]
    X11_UNUSED_ARG(the_entity);
    X11_UNUSED_ARG(status_kind);
    //@@{__RIDL_REGEN_MARKER__} - END : sender_Impl::connector_status_ShapeType_exec_i::on_unexpected_status[_the_entity_status_kind]
  }

  /**
   * Component Executor Implementation Class : sender_exec_i
   */
  //@@{__RIDL_REGEN_MARKER__} - BEGIN : sender_Impl::sender_exec_i[ctor]
  sender_exec_i::sender_exec_i () : rate_ (1)
  {
  }
  //@@{__RIDL_REGEN_MARKER__} - END : sender_Impl::sender_exec_i[ctor]

  sender_exec_i::~sender_exec_i ()
  {
    //@@{__RIDL_REGEN_MARKER__} - BEGIN : sender_Impl::sender_exec_i[dtor]
    // Your code here
    //@@{__RIDL_REGEN_MARKER__} - END : sender_Impl::sender_exec_i[dtor]
  }

  /** User defined public operations. */
  //@@{__RIDL_REGEN_MARKER__} - BEGIN : sender_Impl::sender_exec_i[user_public_ops]
  // Your code here
  //@@{__RIDL_REGEN_MARKER__} - END : sender_Impl::sender_exec_i[user_public_ops]

  /** User defined private operations. */
  //@@{__RIDL_REGEN_MARKER__} - BEGIN : sender_Impl::sender_exec_i[user_private_ops]
  // Your code here
  //@@{__RIDL_REGEN_MARKER__} - END : sender_Impl::sender_exec_i[user_private_ops]

  /** Session component operations */
  void sender_exec_i::configuration_complete ()
  {
    //@@{__RIDL_REGEN_MARKER__} - BEGIN : sender_Impl::sender_exec_i[configuration_complete]
    // Your code here
    //@@{__RIDL_REGEN_MARKER__} - END : sender_Impl::sender_exec_i[configuration_complete]
  }

  void sender_exec_i::ccm_activate ()
  {
    //@@{__RIDL_REGEN_MARKER__} - BEGIN : sender_Impl::sender_exec_i[ccm_activate]
    IDL::traits < ::ShapeTypeInterface::Writer>::ref_type writer = this->context_->get_connection_shape_data ();

    this->instance_handle_ = writer->register_instance (this->square_);

    CIAOX11_TEST_INFO << "Registered shape " <<  IDL::traits< ShapeType>::write (this->square_) << std::endl;

    IDL::traits<CCM_TT::TT_Scheduler>::ref_type timer_scheduler = this->context_->get_connection_timer ();

    this->timer_ = timer_scheduler->schedule_repeated_trigger (
      CORBA::make_reference<TT_Callback> (this->context_, this->instance_handle_, this->square_),
      CCM_TT::TT_Duration (0, 0),
      CCM_TT::TT_Duration (0, 1000000000 / this->rate_),
      0);
    //@@{__RIDL_REGEN_MARKER__} - END : sender_Impl::sender_exec_i[ccm_activate]
  }

  void sender_exec_i::ccm_passivate ()
  {
    //@@{__RIDL_REGEN_MARKER__} - BEGIN : sender_Impl::sender_exec_i[ccm_passivate]
    this->timer_->cancel ();

    IDL::traits < ::ShapeTypeInterface::Writer>::ref_type writer =
      this->context_->get_connection_shape_data ();

    writer->unregister_instance (this->square_, this->instance_handle_);
    //@@{__RIDL_REGEN_MARKER__} - END : sender_Impl::sender_exec_i[ccm_passivate]
  }

  void sender_exec_i::ccm_remove ()
  {
    //@@{__RIDL_REGEN_MARKER__} - BEGIN : sender_Impl::sender_exec_i[ccm_remove]
    // Your code here
    //@@{__RIDL_REGEN_MARKER__} - END : sender_Impl::sender_exec_i[ccm_remove]
  }

  IDL::traits< ::CCM_DDS::CCM_ConnectorStatusListener >::ref_type
  sender_exec_i::get_connector_status_ShapeType ()
  {
  //@@{__RIDL_REGEN_MARKER__} - BEGIN : sender_Impl::sender_exec_i[get_connector_status_ShapeType]
    if (!this->connector_status_ShapeType_)
    {
      this->connector_status_ShapeType_ = CORBA::make_reference <connector_status_ShapeType_exec_i> (this->context_);
    }
    return this->connector_status_ShapeType_;
  //@@{__RIDL_REGEN_MARKER__} - END : sender_Impl::sender_exec_i[get_connector_status_ShapeType]
  }


  int16_t
  sender_exec_i::rate ()
  {
    //@@{__RIDL_REGEN_MARKER__} - BEGIN : sender_Impl::sender_exec_i::rate[getter]
    return this->rate_;
    //@@{__RIDL_REGEN_MARKER__} - END : sender_Impl::sender_exec_i::rate[getter]
  }

  void
  sender_exec_i::rate (
      int16_t rate)
  {
    //@@{__RIDL_REGEN_MARKER__} - BEGIN : sender_Impl::sender_exec_i::rate[setter]
    this->rate_ = rate;
    //@@{__RIDL_REGEN_MARKER__} - END : sender_Impl::sender_exec_i::rate[setter]
  }

  /// Operations from Components::SessionComponent
  void
  sender_exec_i::set_session_context (
    IDL::traits<Components::SessionContext>::ref_type ctx)
  {
    // Setting the context of this component.
    //@@{__RIDL_REGEN_MARKER__} - BEGIN : sender_Impl::sender_exec_i[set_session_context]
    this->context_ = IDL::traits< CCM_sender_Context >::narrow (ctx);
    //@@{__RIDL_REGEN_MARKER__} - END : sender_Impl::sender_exec_i[set_session_context]
  }


  //@@{__RIDL_REGEN_MARKER__} - BEGIN : sender_Impl[user_namespace_end_impl]
  //@@{__RIDL_REGEN_MARKER__} - END : sender_Impl[user_namespace_end_impl]

  //@@{__RIDL_REGEN_MARKER__} - BEGIN : sender_Impl[factory]
  extern "C" void
  create_sender_Impl (
    IDL::traits<Components::EnterpriseComponent>::ref_type& component)
  {
    component = CORBA::make_reference <sender_exec_i> ();
  }
  //@@{__RIDL_REGEN_MARKER__} - END : sender_Impl[factory]

} // namespace sender_Impl
//@@{__RIDL_REGEN_MARKER__} - BEGIN : shapes_sender_impl.cpp[Footer]
// Your footer (code) here
// -*- END -*-
