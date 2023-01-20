// -*- C++ -*-
  /*
   * Your header here.
   */
#ifndef __RIDL_ECHO_USER_EXEC_H_BAACAJDE_INCLUDED__
#define __RIDL_ECHO_USER_EXEC_H_BAACAJDE_INCLUDED__

//@@{__RIDL_REGEN_MARKER__} - HEADER_END : echo_user_impl.h[Header]

#pragma once

#include "echo_userEC.h"

#include /**/ "echo_user_exec_export.h"

//@@{__RIDL_REGEN_MARKER__} - BEGIN : echo_user_impl.h[user_includes]
// Your includes here
//@@{__RIDL_REGEN_MARKER__} - END : echo_user_impl.h[user_includes]

//@@{__RIDL_REGEN_MARKER__} - BEGIN : echo_user_impl.h[user_global_decl]
// Your declarations here
//@@{__RIDL_REGEN_MARKER__} - END : echo_user_impl.h[user_global_decl]

/// Namespace for implementation of Example::EchoUser component
namespace Example_EchoUser_Impl
{
  /// Forward declarations
  class EchoUser_exec_i;

  //@@{__RIDL_REGEN_MARKER__} - BEGIN : Example_EchoUser_Impl[user_namespace_decl]
  //@@{__RIDL_REGEN_MARKER__} - END : Example_EchoUser_Impl[user_namespace_decl]


  /// Component Executor Implementation Class : EchoUser_exec_i
  class EchoUser_exec_i final
    : public virtual IDL::traits<::Example::CCM_EchoUser>::base_type
  {
  public:
    //@@{__RIDL_REGEN_MARKER__} - BEGIN : Example_EchoUser_Impl::EchoUser_exec_i[ctor]
    /// Constructor
    EchoUser_exec_i ();
    //@@{__RIDL_REGEN_MARKER__} - END : Example_EchoUser_Impl::EchoUser_exec_i[ctor]
    /// Destructor
    ~EchoUser_exec_i () override;

    /** @name Component port operations. */
    //@{

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
    //@@{__RIDL_REGEN_MARKER__} - BEGIN : Example_EchoUser_Impl::EchoUser_exec_i[user_public_ops]
    // Your code here
    //@@{__RIDL_REGEN_MARKER__} - END : Example_EchoUser_Impl::EchoUser_exec_i[user_public_ops]
    //@}

  private:
    /// Context for component instance.
    IDL::traits<::Example::CCM_EchoUser_Context>::ref_type context_;

    /** @name Component facets. */
    //@{
    //@}

    /** @name User defined members. */
    //@{
    //@@{__RIDL_REGEN_MARKER__} - BEGIN : Example_EchoUser_Impl::EchoUser_exec_i[user_members]
    // Your code here
    //@@{__RIDL_REGEN_MARKER__} - END : Example_EchoUser_Impl::EchoUser_exec_i[user_members]
    //@}

    /** @name User defined private operations. */
    //@{
    //@@{__RIDL_REGEN_MARKER__} - BEGIN : Example_EchoUser_Impl::EchoUser_exec_i[user_private_ops]
    // Your code here
    //@@{__RIDL_REGEN_MARKER__} - END : Example_EchoUser_Impl::EchoUser_exec_i[user_private_ops]
    //@}

  private:
    /** @name Illegal to be called. Deleted explicitly to let the compiler detect any violation */
    //@{
    EchoUser_exec_i(const EchoUser_exec_i&) = delete;
    EchoUser_exec_i(EchoUser_exec_i&&) = delete;
    EchoUser_exec_i& operator=(const EchoUser_exec_i&) = delete;
    EchoUser_exec_i& operator=(EchoUser_exec_i&&) = delete;
    //@}
  };

  //@@{__RIDL_REGEN_MARKER__} - BEGIN : Example_EchoUser_Impl[user_namespace_end_decl]
  //@@{__RIDL_REGEN_MARKER__} - END : Example_EchoUser_Impl[user_namespace_end_decl]

} // namespace Example_EchoUser_Impl

//@@{__RIDL_REGEN_MARKER__} - BEGIN : Example_EchoUser_Impl[factory]
  extern "C" ECHO_USER_EXEC_Export  void
  create_Example_EchoUser_Impl (
    IDL::traits<Components::EnterpriseComponent>::ref_type& component);
//@@{__RIDL_REGEN_MARKER__} - END : Example_EchoUser_Impl[factory]
//@@{__RIDL_REGEN_MARKER__} - BEGIN : echo_user_impl.h[Footer]

#endif /* __RIDL_ECHO_USER_EXEC_H_BAACAJDE_INCLUDED__ */

// Your footer (code) here
// -*- END -*-
