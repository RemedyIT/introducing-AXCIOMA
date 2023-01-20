// -*- C++ -*-
  /*
   * Your header here.
   */
#ifndef __RIDL_SHAPES_RECEIVER_COMP_EXEC_H_BBJCHIEC_INCLUDED__
#define __RIDL_SHAPES_RECEIVER_COMP_EXEC_H_BBJCHIEC_INCLUDED__

//@@{__RIDL_REGEN_MARKER__} - HEADER_END : shapes_receiver_impl.h[Header]

#pragma once

#include "shapes_receiverEC.h"

#include /**/ "shapes_receiver_exec_export.h"

//@@{__RIDL_REGEN_MARKER__} - BEGIN : shapes_receiver_impl.h[user_includes]
// Your includes here
//@@{__RIDL_REGEN_MARKER__} - END : shapes_receiver_impl.h[user_includes]

//@@{__RIDL_REGEN_MARKER__} - BEGIN : shapes_receiver_impl.h[user_global_decl]
// Your declarations here
//@@{__RIDL_REGEN_MARKER__} - END : shapes_receiver_impl.h[user_global_decl]

/// Namespace for implementation of receiver component
namespace receiver_Impl
{
  /// Forward declarations
  class receiver_exec_i;

  //@@{__RIDL_REGEN_MARKER__} - BEGIN : receiver_Impl[user_namespace_decl]
  //@@{__RIDL_REGEN_MARKER__} - END : receiver_Impl[user_namespace_decl]


  /// Executor implementation class for shape_data_listener facet
  class shape_data_listener_exec_i final
    : public IDL::traits<::ShapeTypeInterface::CCM_Listener>::base_type
  {
  public:
    //@@{__RIDL_REGEN_MARKER__} - BEGIN : receiver_Impl::shape_data_listener_exec_i[ctor]
    /// Constructor
    /// @param[in] context Component context
    shape_data_listener_exec_i (
        IDL::traits< CCM_receiver_Context>::ref_type context);
    //@@{__RIDL_REGEN_MARKER__} - END : receiver_Impl::shape_data_listener_exec_i[ctor]

    /// Destructor
    ~shape_data_listener_exec_i () override;

    /** @name Operations from ::ShapeTypeInterface::CCM_Listener */
    //@{

    void
    on_one_data (
        const ::ShapeType& datum,
        const ::CCM_DDS::ReadInfo& info) override;

    void
    on_many_data (
        const ::ShapeTypeSeq& data,
        const ::CCM_DDS::ReadInfoSeq& infos) override;
    //@}

    /** @name User defined public operations. */
    //@{
    //@@{__RIDL_REGEN_MARKER__} - BEGIN : receiver_Impl::shape_data_listener_exec_i[user_public_ops]
    // Your code here
    //@@{__RIDL_REGEN_MARKER__} - END : receiver_Impl::shape_data_listener_exec_i[user_public_ops]
    //@}

  private:
    /// Context for component instance. Used for all middleware communication.
    IDL::traits<CCM_receiver_Context>::ref_type context_;

    /** @name User defined members. */
    //@{
    //@@{__RIDL_REGEN_MARKER__} - BEGIN : receiver_Impl::shape_data_listener_exec_i[user_members]
    // Your code here
    //@@{__RIDL_REGEN_MARKER__} - END : receiver_Impl::shape_data_listener_exec_i[user_members]
    //@}

    /** @name User defined private operations. */
    //@{
    //@@{__RIDL_REGEN_MARKER__} - BEGIN : receiver_Impl::shape_data_listener_exec_i[user_private_ops]
    // Your code here
    //@@{__RIDL_REGEN_MARKER__} - END : receiver_Impl::shape_data_listener_exec_i[user_private_ops]
    //@}
  };

  /// Executor implementation class for shape_status facet
  class shape_status_exec_i final
    : public IDL::traits<::CCM_DDS::CCM_PortStatusListener>::base_type
  {
  public:
    //@@{__RIDL_REGEN_MARKER__} - BEGIN : receiver_Impl::shape_status_exec_i[ctor]
    /// Constructor
    /// @param[in] context Component context
    shape_status_exec_i (
        IDL::traits< CCM_receiver_Context>::ref_type context);
    //@@{__RIDL_REGEN_MARKER__} - END : receiver_Impl::shape_status_exec_i[ctor]

    /// Destructor
    ~shape_status_exec_i () override;

    /** @name Operations from ::CCM_DDS::CCM_PortStatusListener */
    //@{

    void
    on_requested_deadline_missed (
        IDL::traits<::DDS::DataReader>::ref_type the_reader,
        const ::DDS::RequestedDeadlineMissedStatus& status) override;

    void
    on_sample_lost (
        IDL::traits<::DDS::DataReader>::ref_type the_reader,
        const ::DDS::SampleLostStatus& status) override;
    //@}

    /** @name User defined public operations. */
    //@{
    //@@{__RIDL_REGEN_MARKER__} - BEGIN : receiver_Impl::shape_status_exec_i[user_public_ops]
    // Your code here
    //@@{__RIDL_REGEN_MARKER__} - END : receiver_Impl::shape_status_exec_i[user_public_ops]
    //@}

  private:
    /// Context for component instance. Used for all middleware communication.
    IDL::traits<CCM_receiver_Context>::ref_type context_;

    /** @name User defined members. */
    //@{
    //@@{__RIDL_REGEN_MARKER__} - BEGIN : receiver_Impl::shape_status_exec_i[user_members]
    // Your code here
    //@@{__RIDL_REGEN_MARKER__} - END : receiver_Impl::shape_status_exec_i[user_members]
    //@}

    /** @name User defined private operations. */
    //@{
    //@@{__RIDL_REGEN_MARKER__} - BEGIN : receiver_Impl::shape_status_exec_i[user_private_ops]
    // Your code here
    //@@{__RIDL_REGEN_MARKER__} - END : receiver_Impl::shape_status_exec_i[user_private_ops]
    //@}
  };

  /// Component Executor Implementation Class : receiver_exec_i
  class receiver_exec_i final
    : public virtual IDL::traits<CCM_receiver>::base_type
  {
  public:
    //@@{__RIDL_REGEN_MARKER__} - BEGIN : receiver_Impl::receiver_exec_i[ctor]
    /// Constructor
    receiver_exec_i ();
    //@@{__RIDL_REGEN_MARKER__} - END : receiver_Impl::receiver_exec_i[ctor]
    /// Destructor
    ~receiver_exec_i () override;

    /** @name Component port operations. */
    //@{

    /// Factory method and getter for the shape_data_listener facet
    /// @return existing instance of facet if one exists, else creates one
    IDL::traits<::ShapeTypeInterface::CCM_Listener>::ref_type get_shape_data_listener () override;
    /// Factory method and getter for the shape_status facet
    /// @return existing instance of facet if one exists, else creates one
    IDL::traits<::CCM_DDS::CCM_PortStatusListener>::ref_type get_shape_status () override;
    //@}

    /** @name Session component operations */
    //@{

    /// Setter for container context for this component
    /// @param[in] ctx Component context
    void set_session_context (IDL::traits<Components::SessionContext>::ref_type ctx) override;

    /// Component state change method to configuration_complete state
    void configuration_complete () override;

    /// Component state change method to activated state
    void ccm_activate () override;

    /// Component state change method to passivated state
    void ccm_passivate () override;

    /// Component state change method to removed state
    void ccm_remove () override;
    //@}

    /** @name User defined public operations. */
    //@{
    //@@{__RIDL_REGEN_MARKER__} - BEGIN : receiver_Impl::receiver_exec_i[user_public_ops]
    // Your code here
    //@@{__RIDL_REGEN_MARKER__} - END : receiver_Impl::receiver_exec_i[user_public_ops]
    //@}

  private:
    /// Context for component instance.
    IDL::traits<CCM_receiver_Context>::ref_type context_;

    /** @name Component attributes. */
    //@{
    //@}

    /** @name Component facets. */
    //@{
    IDL::traits<::ShapeTypeInterface::CCM_Listener>::ref_type shape_data_listener_;
    IDL::traits<::CCM_DDS::CCM_PortStatusListener>::ref_type shape_status_;
    //@}

    /** @name User defined members. */
    //@{
    //@@{__RIDL_REGEN_MARKER__} - BEGIN : receiver_Impl::receiver_exec_i[user_members]
    // Your code here
    //@@{__RIDL_REGEN_MARKER__} - END : receiver_Impl::receiver_exec_i[user_members]
    //@}

    /** @name User defined private operations. */
    //@{
    //@@{__RIDL_REGEN_MARKER__} - BEGIN : receiver_Impl::receiver_exec_i[user_private_ops]
    // Your code here
    //@@{__RIDL_REGEN_MARKER__} - END : receiver_Impl::receiver_exec_i[user_private_ops]
    //@}

  private:
    /** @name Illegal to be called. Deleted explicitly to let the compiler detect any violation */
    //@{
    receiver_exec_i(const receiver_exec_i&) = delete;
    receiver_exec_i(receiver_exec_i&&) = delete;
    receiver_exec_i& operator=(const receiver_exec_i&) = delete;
    receiver_exec_i& operator=(receiver_exec_i&&) = delete;
    //@}
  };

  //@@{__RIDL_REGEN_MARKER__} - BEGIN : receiver_Impl[user_namespace_end_decl]
  //@@{__RIDL_REGEN_MARKER__} - END : receiver_Impl[user_namespace_end_decl]

} // namespace receiver_Impl

//@@{__RIDL_REGEN_MARKER__} - BEGIN : receiver_Impl[factory]
  extern "C" SHAPES_RECEIVER_EXEC_Export  void
  create_receiver_Impl (
    IDL::traits<Components::EnterpriseComponent>::ref_type& component);
//@@{__RIDL_REGEN_MARKER__} - END : receiver_Impl[factory]
//@@{__RIDL_REGEN_MARKER__} - BEGIN : shapes_receiver_impl.h[Footer]

#endif /* __RIDL_SHAPES_RECEIVER_COMP_EXEC_H_BBJCHIEC_INCLUDED__ */

// Your footer (code) here
// -*- END -*-
