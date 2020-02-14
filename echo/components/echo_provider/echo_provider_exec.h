// -*- C++ -*-
  /*
   * Your header here.
   */
#ifndef __RIDL_ECHO_PROVIDER_EXEC_H_HHDFGFCE_INCLUDED__
#define __RIDL_ECHO_PROVIDER_EXEC_H_HHDFGFCE_INCLUDED__

//@@{__RIDL_REGEN_MARKER__} - HEADER_END : echo_provider_impl.h[Header]

#pragma once

#include "echo_providerEC.h"

#include /**/ "echo_provider_exec_export.h"

//@@{__RIDL_REGEN_MARKER__} - BEGIN : echo_provider_impl.h[user_includes]
// Your includes here
//@@{__RIDL_REGEN_MARKER__} - END : echo_provider_impl.h[user_includes]

//@@{__RIDL_REGEN_MARKER__} - BEGIN : echo_provider_impl.h[user_global_decl]
// Your declarations here
//@@{__RIDL_REGEN_MARKER__} - END : echo_provider_impl.h[user_global_decl]

/// Namespace for implementation of Example::EchoProvider component
namespace Example_EchoProvider_Impl
{
  /// Forward declarations
  class EchoProvider_exec_i;

  //@@{__RIDL_REGEN_MARKER__} - BEGIN : Example_EchoProvider_Impl[user_namespace_decl]
  //@@{__RIDL_REGEN_MARKER__} - END : Example_EchoProvider_Impl[user_namespace_decl]


  /// Executor implementation class for do_echo facet
  class do_echo_exec_i final
    : public IDL::traits< ::Example::CCM_Echo>::base_type
  {
  public:

    //@@{__RIDL_REGEN_MARKER__} - BEGIN : Example_EchoProvider_Impl::do_echo_exec_i[ctor]
    /// Constructor
    /// @param[in] context Component context
    do_echo_exec_i (
        IDL::traits< ::Example::CCM_EchoProvider_Context>::ref_type context);
    //@@{__RIDL_REGEN_MARKER__} - END : Example_EchoProvider_Impl::do_echo_exec_i[ctor]

    /// Destructor
    virtual ~do_echo_exec_i ();

    /** @name Operations from ::Example::CCM_Echo */
    //@{

    virtual
    std::string
    process (
        const std::string& text) override;
    //@}

    /** @name User defined public operations. */
    //@{
    //@@{__RIDL_REGEN_MARKER__} - BEGIN : Example_EchoProvider_Impl::do_echo_exec_i[user_public_ops]
    // Your code here
    //@@{__RIDL_REGEN_MARKER__} - END : Example_EchoProvider_Impl::do_echo_exec_i[user_public_ops]
    //@}

  private:
    /// Context for component instance. Used for all middleware communication.
    IDL::traits< ::Example::CCM_EchoProvider_Context>::ref_type context_;

    /** @name User defined members. */
    //@{
    //@@{__RIDL_REGEN_MARKER__} - BEGIN : Example_EchoProvider_Impl::do_echo_exec_i[user_members]
    // Your code here
    //@@{__RIDL_REGEN_MARKER__} - END : Example_EchoProvider_Impl::do_echo_exec_i[user_members]
    //@}

    /** @name User defined private operations. */
    //@{
    //@@{__RIDL_REGEN_MARKER__} - BEGIN : Example_EchoProvider_Impl::do_echo_exec_i[user_private_ops]
    // Your code here
    //@@{__RIDL_REGEN_MARKER__} - END : Example_EchoProvider_Impl::do_echo_exec_i[user_private_ops]
    //@}
  };

  /// Component Executor Implementation Class : EchoProvider_exec_i
  class EchoProvider_exec_i final
    : public virtual IDL::traits< ::Example::CCM_EchoProvider>::base_type
  {
  public:
    //@@{__RIDL_REGEN_MARKER__} - BEGIN : Example_EchoProvider_Impl::EchoProvider_exec_i[ctor]
    /// Constructor
    EchoProvider_exec_i ();
    //@@{__RIDL_REGEN_MARKER__} - END : Example_EchoProvider_Impl::EchoProvider_exec_i[ctor]
    /// Destructor
    virtual ~EchoProvider_exec_i ();

    /** @name Component port operations. */
    //@{

    /// Factory method and getter for the do_echo facet
    /// @return existing instance of facet if one exists, else creates one
    virtual IDL::traits< ::Example::CCM_Echo>::ref_type get_do_echo () override;
    //@}

    /** @name Session component operations */
    //@{

    /// Setter for container context for this component
    /// @param[in] ctx Component context
    virtual void set_session_context (IDL::traits<Components::SessionContext>::ref_type ctx) override;

    /// Component state change method to configuration_complete state
    virtual void configuration_complete () override;

    /// Component state change method to activated state
    virtual void ccm_activate () override;

    /// Component state change method to passivated state
    virtual void ccm_passivate () override;

    /// Component state change method to removed state
    virtual void ccm_remove () override;
    //@}

    /** @name User defined public operations. */
    //@{
    //@@{__RIDL_REGEN_MARKER__} - BEGIN : Example_EchoProvider_Impl::EchoProvider_exec_i[user_public_ops]
    // Your code here
    //@@{__RIDL_REGEN_MARKER__} - END : Example_EchoProvider_Impl::EchoProvider_exec_i[user_public_ops]
    //@}

  private:
    /// Context for component instance.
    IDL::traits< ::Example::CCM_EchoProvider_Context>::ref_type context_;

    /** @name Component facets. */
    //@{
    IDL::traits< ::Example::CCM_Echo>::ref_type do_echo_;
    //@}

    /** @name User defined members. */
    //@{
    //@@{__RIDL_REGEN_MARKER__} - BEGIN : Example_EchoProvider_Impl::EchoProvider_exec_i[user_members]
    // Your code here
    //@@{__RIDL_REGEN_MARKER__} - END : Example_EchoProvider_Impl::EchoProvider_exec_i[user_members]
    //@}

    /** @name User defined private operations. */
    //@{
    //@@{__RIDL_REGEN_MARKER__} - BEGIN : Example_EchoProvider_Impl::EchoProvider_exec_i[user_private_ops]
    // Your code here
    //@@{__RIDL_REGEN_MARKER__} - END : Example_EchoProvider_Impl::EchoProvider_exec_i[user_private_ops]
    //@}

  private:
    /** @name Illegal to be called. Deleted explicitly to let the compiler detect any violation */
    //@{
    EchoProvider_exec_i(const EchoProvider_exec_i&) = delete;
    EchoProvider_exec_i(EchoProvider_exec_i&&) = delete;
    EchoProvider_exec_i& operator=(const EchoProvider_exec_i&) = delete;
    EchoProvider_exec_i& operator=(EchoProvider_exec_i&&) = delete;
    //@}
  };

  //@@{__RIDL_REGEN_MARKER__} - BEGIN : Example_EchoProvider_Impl[user_namespace_end_decl]
  //@@{__RIDL_REGEN_MARKER__} - END : Example_EchoProvider_Impl[user_namespace_end_decl]

} // namespace Example_EchoProvider_Impl

//@@{__RIDL_REGEN_MARKER__} - BEGIN : Example_EchoProvider_Impl[factory]
  extern "C" ECHO_PROVIDER_EXEC_Export  void
  create_Example_EchoProvider_Impl (
    IDL::traits<Components::EnterpriseComponent>::ref_type& component);
//@@{__RIDL_REGEN_MARKER__} - END : Example_EchoProvider_Impl[factory]
//@@{__RIDL_REGEN_MARKER__} - BEGIN : echo_provider_impl.h[Footer]

#endif /* __RIDL_ECHO_PROVIDER_EXEC_H_HHDFGFCE_INCLUDED__ */

// Your footer (code) here
// -*- END -*-
