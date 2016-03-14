// -*- C++ -*-
/*
 * Your header here.
 */
//@@{__RIDL_REGEN_MARKER__} - HEADER_END : shapes_receiver_impl.cpp[Header]

#include "shapes_receiver_exec.h"

//@@{__RIDL_REGEN_MARKER__} - BEGIN : receiver_Impl[user_includes]
#include <ciao/testlib/ciaox11_testlog.h>
//@@{__RIDL_REGEN_MARKER__} - END : receiver_Impl[user_includes]

//@@{__RIDL_REGEN_MARKER__} - BEGIN : receiver_Impl[user_global_impl]
// Your declarations here
//@@{__RIDL_REGEN_MARKER__} - END : receiver_Impl[user_global_impl]

namespace receiver_Impl
{
  //@@{__RIDL_REGEN_MARKER__} - BEGIN : receiver_Impl[user_namespace_impl]
  //@@{__RIDL_REGEN_MARKER__} - END : receiver_Impl[user_namespace_impl]

  /**
   * Facet Executor Implementation Class : shape_data_listener_exec_i
   */

  //@@{__RIDL_REGEN_MARKER__} - BEGIN : receiver_Impl::shape_data_listener_exec_i[ctor]
  shape_data_listener_exec_i::shape_data_listener_exec_i (
    IDL::traits< CCM_receiver_Context >::ref_type context)
    : context_ (std::move (context))
  {
  }
  //@@{__RIDL_REGEN_MARKER__} - END : receiver_Impl::shape_data_listener_exec_i[ctor]

  shape_data_listener_exec_i::~shape_data_listener_exec_i ()
  {
    //@@{__RIDL_REGEN_MARKER__} - BEGIN : receiver_Impl::shape_data_listener_exec_i[dtor]
    // Your code here
    //@@{__RIDL_REGEN_MARKER__} - END : receiver_Impl::shape_data_listener_exec_i[dtor]
  }

  /** User defined public operations. */
  //@@{__RIDL_REGEN_MARKER__} - BEGIN : receiver_Impl::shape_data_listener_exec_i[user_public_ops]
  // Your code here
  //@@{__RIDL_REGEN_MARKER__} - END : receiver_Impl::shape_data_listener_exec_i[user_public_ops]

  /** User defined private operations. */
  //@@{__RIDL_REGEN_MARKER__} - BEGIN : receiver_Impl::shape_data_listener_exec_i[user_private_ops]
  // Your code here
  //@@{__RIDL_REGEN_MARKER__} - END : receiver_Impl::shape_data_listener_exec_i[user_private_ops]


  /** Operations and attributes from shape_data_listener */

  void
  shape_data_listener_exec_i::on_one_data (
      const ::ShapeType& datum,
      const ::CCM_DDS::ReadInfo& info)
  {
    //@@{__RIDL_REGEN_MARKER__} - BEGIN : receiver_Impl::shape_data_listener_exec_i::on_one_data[_datum_info]
    X11_UNUSED_ARG(info);
    CIAOX11_TEST_INFO << "Receiver, on_one_data " << IDL::traits< ShapeType>::write (datum) << std::endl;
    //@@{__RIDL_REGEN_MARKER__} - END : receiver_Impl::shape_data_listener_exec_i::on_one_data[_datum_info]
  }

  void
  shape_data_listener_exec_i::on_many_data (
      const ::ShapeTypeSeq& data,
      const ::CCM_DDS::ReadInfoSeq& infos)
  {
    //@@{__RIDL_REGEN_MARKER__} - BEGIN : receiver_Impl::shape_data_listener_exec_i::on_many_data[_data_infos]
    X11_UNUSED_ARG(data);
    X11_UNUSED_ARG(infos);
    //@@{__RIDL_REGEN_MARKER__} - END : receiver_Impl::shape_data_listener_exec_i::on_many_data[_data_infos]
  }
  /**
   * Facet Executor Implementation Class : shape_status_exec_i
   */

  //@@{__RIDL_REGEN_MARKER__} - BEGIN : receiver_Impl::shape_status_exec_i[ctor]
  shape_status_exec_i::shape_status_exec_i (
    IDL::traits< CCM_receiver_Context >::ref_type context)
    : context_ (std::move (context))
  {
  }
  //@@{__RIDL_REGEN_MARKER__} - END : receiver_Impl::shape_status_exec_i[ctor]

  shape_status_exec_i::~shape_status_exec_i ()
  {
    //@@{__RIDL_REGEN_MARKER__} - BEGIN : receiver_Impl::shape_status_exec_i[dtor]
    // Your code here
    //@@{__RIDL_REGEN_MARKER__} - END : receiver_Impl::shape_status_exec_i[dtor]
  }

  /** User defined public operations. */
  //@@{__RIDL_REGEN_MARKER__} - BEGIN : receiver_Impl::shape_status_exec_i[user_public_ops]
  // Your code here
  //@@{__RIDL_REGEN_MARKER__} - END : receiver_Impl::shape_status_exec_i[user_public_ops]

  /** User defined private operations. */
  //@@{__RIDL_REGEN_MARKER__} - BEGIN : receiver_Impl::shape_status_exec_i[user_private_ops]
  // Your code here
  //@@{__RIDL_REGEN_MARKER__} - END : receiver_Impl::shape_status_exec_i[user_private_ops]


  /** Operations and attributes from shape_status */

  void
  shape_status_exec_i::on_requested_deadline_missed (
      IDL::traits< ::DDS::DataReader>::ref_type the_reader,
      const ::DDS::RequestedDeadlineMissedStatus& status)
  {
    //@@{__RIDL_REGEN_MARKER__} - BEGIN : receiver_Impl::shape_status_exec_i::on_requested_deadline_missed[_the_reader_status]
    X11_UNUSED_ARG(the_reader);
    X11_UNUSED_ARG(status);
    //@@{__RIDL_REGEN_MARKER__} - END : receiver_Impl::shape_status_exec_i::on_requested_deadline_missed[_the_reader_status]
  }

  void
  shape_status_exec_i::on_sample_lost (
      IDL::traits< ::DDS::DataReader>::ref_type the_reader,
      const ::DDS::SampleLostStatus& status)
  {
    //@@{__RIDL_REGEN_MARKER__} - BEGIN : receiver_Impl::shape_status_exec_i::on_sample_lost[_the_reader_status]
    X11_UNUSED_ARG(the_reader);
    X11_UNUSED_ARG(status);
    //@@{__RIDL_REGEN_MARKER__} - END : receiver_Impl::shape_status_exec_i::on_sample_lost[_the_reader_status]
  }

  /**
   * Component Executor Implementation Class : receiver_exec_i
   */
  //@@{__RIDL_REGEN_MARKER__} - BEGIN : receiver_Impl::receiver_exec_i[ctor]
  receiver_exec_i::receiver_exec_i ()
  {
  }
  //@@{__RIDL_REGEN_MARKER__} - END : receiver_Impl::receiver_exec_i[ctor]

  receiver_exec_i::~receiver_exec_i ()
  {
    //@@{__RIDL_REGEN_MARKER__} - BEGIN : receiver_Impl::receiver_exec_i[dtor]
    // Your code here
    //@@{__RIDL_REGEN_MARKER__} - END : receiver_Impl::receiver_exec_i[dtor]
  }


  /** User defined public operations. */
  //@@{__RIDL_REGEN_MARKER__} - BEGIN : receiver_Impl::receiver_exec_i[user_public_ops]
  // Your code here
  //@@{__RIDL_REGEN_MARKER__} - END : receiver_Impl::receiver_exec_i[user_public_ops]

  /** User defined private operations. */
  //@@{__RIDL_REGEN_MARKER__} - BEGIN : receiver_Impl::receiver_exec_i[user_private_ops]
  // Your code here
  //@@{__RIDL_REGEN_MARKER__} - END : receiver_Impl::receiver_exec_i[user_private_ops]



  /** Session component operations */
  void receiver_exec_i::configuration_complete ()
  {
    //@@{__RIDL_REGEN_MARKER__} - BEGIN : receiver_Impl::receiver_exec_i[configuration_complete]
    // Your code here
    //@@{__RIDL_REGEN_MARKER__} - END : receiver_Impl::receiver_exec_i[configuration_complete]
  }

  void receiver_exec_i::ccm_activate ()
  {
    //@@{__RIDL_REGEN_MARKER__} - BEGIN : receiver_Impl::receiver_exec_i[ccm_activate]
    IDL::traits< ::CCM_DDS::DataListenerControl>::ref_type lc =
      this->context_->get_connection_shape_data_control ();
    lc->mode (::CCM_DDS::ListenerMode::ONE_BY_ONE);
    //@@{__RIDL_REGEN_MARKER__} - END : receiver_Impl::receiver_exec_i[ccm_activate]
  }

  void receiver_exec_i::ccm_passivate ()
  {
    //@@{__RIDL_REGEN_MARKER__} - BEGIN : receiver_Impl::receiver_exec_i[ccm_passivate]
    // Your code here
    //@@{__RIDL_REGEN_MARKER__} - END : receiver_Impl::receiver_exec_i[ccm_passivate]
  }

  void receiver_exec_i::ccm_remove ()
  {
    //@@{__RIDL_REGEN_MARKER__} - BEGIN : receiver_Impl::receiver_exec_i[ccm_remove]
    // Your code here
    //@@{__RIDL_REGEN_MARKER__} - END : receiver_Impl::receiver_exec_i[ccm_remove]
  }




  IDL::traits< ::ShapeTypeInterface::CCM_Listener >::ref_type
  receiver_exec_i::get_shape_data_listener ()
  {
  //@@{__RIDL_REGEN_MARKER__} - BEGIN : receiver_Impl::receiver_exec_i[get_shape_data_listener]
    if (!this->shape_data_listener_)
    {
      this->shape_data_listener_ = CORBA::make_reference <shape_data_listener_exec_i> (this->context_);
    }
    return this->shape_data_listener_;
  //@@{__RIDL_REGEN_MARKER__} - END : receiver_Impl::receiver_exec_i[get_shape_data_listener]
  }



  IDL::traits< ::CCM_DDS::CCM_PortStatusListener >::ref_type
  receiver_exec_i::get_shape_status ()
  {
  //@@{__RIDL_REGEN_MARKER__} - BEGIN : receiver_Impl::receiver_exec_i[get_shape_status]
    if (!this->shape_status_)
    {
      this->shape_status_ = CORBA::make_reference <shape_status_exec_i> (this->context_);
    }
    return this->shape_status_;
  //@@{__RIDL_REGEN_MARKER__} - END : receiver_Impl::receiver_exec_i[get_shape_status]
  }



  /// Operations from Components::SessionComponent
  void
  receiver_exec_i::set_session_context (
    IDL::traits<Components::SessionContext>::ref_type ctx)
  {
    // Setting the context of this component.
    //@@{__RIDL_REGEN_MARKER__} - BEGIN : receiver_Impl::receiver_exec_i[set_session_context]
    this->context_ = IDL::traits< CCM_receiver_Context >::narrow (ctx);
    //@@{__RIDL_REGEN_MARKER__} - END : receiver_Impl::receiver_exec_i[set_session_context]
  }


  //@@{__RIDL_REGEN_MARKER__} - BEGIN : receiver_Impl[user_namespace_end_impl]
  //@@{__RIDL_REGEN_MARKER__} - END : receiver_Impl[user_namespace_end_impl]

  //@@{__RIDL_REGEN_MARKER__} - BEGIN : receiver_Impl[factory]
  extern "C" void
  create_receiver_Impl (
    IDL::traits<Components::EnterpriseComponent>::ref_type& component)
  {
    component = CORBA::make_reference <receiver_exec_i> ();
  }
  //@@{__RIDL_REGEN_MARKER__} - END : receiver_Impl[factory]

} // namespace receiver_Impl
//@@{__RIDL_REGEN_MARKER__} - BEGIN : shapes_receiver_impl.cpp[Footer]
// Your footer (code) here
// -*- END -*-
