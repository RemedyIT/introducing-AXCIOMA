// -*- C++ -*-
/*
 * Your header here.
 */
//@@{__RIDL_REGEN_MARKER__} - HEADER_END : echo_user_impl.cpp[Header]

#include "echo_user_exec.h"

//@@{__RIDL_REGEN_MARKER__} - BEGIN : Example_EchoUser_Impl[user_includes]
#include <ciao/testlib/ciaox11_testlog.h>
//@@{__RIDL_REGEN_MARKER__} - END : Example_EchoUser_Impl[user_includes]

//@@{__RIDL_REGEN_MARKER__} - BEGIN : Example_EchoUser_Impl[user_global_impl]
// Your declarations here
//@@{__RIDL_REGEN_MARKER__} - END : Example_EchoUser_Impl[user_global_impl]

namespace Example_EchoUser_Impl
{
  //@@{__RIDL_REGEN_MARKER__} - BEGIN : Example_EchoUser_Impl[user_namespace_impl]
  //@@{__RIDL_REGEN_MARKER__} - END : Example_EchoUser_Impl[user_namespace_impl]


  /**
   * Component Executor Implementation Class : EchoUser_exec_i
   */
  //@@{__RIDL_REGEN_MARKER__} - BEGIN : Example_EchoUser_Impl::EchoUser_exec_i[ctor]
  EchoUser_exec_i::EchoUser_exec_i ()
  {
  }
  //@@{__RIDL_REGEN_MARKER__} - END : Example_EchoUser_Impl::EchoUser_exec_i[ctor]

  EchoUser_exec_i::~EchoUser_exec_i ()
  {
    //@@{__RIDL_REGEN_MARKER__} - BEGIN : Example_EchoUser_Impl::EchoUser_exec_i[dtor]
    // Your code here
    //@@{__RIDL_REGEN_MARKER__} - END : Example_EchoUser_Impl::EchoUser_exec_i[dtor]
  }

  /** User defined public operations. */
  //@@{__RIDL_REGEN_MARKER__} - BEGIN : Example_EchoUser_Impl::EchoUser_exec_i[user_public_ops]
  // Your code here
  //@@{__RIDL_REGEN_MARKER__} - END : Example_EchoUser_Impl::EchoUser_exec_i[user_public_ops]

  /** User defined private operations. */
  //@@{__RIDL_REGEN_MARKER__} - BEGIN : Example_EchoUser_Impl::EchoUser_exec_i[user_private_ops]
  // Your code here
  //@@{__RIDL_REGEN_MARKER__} - END : Example_EchoUser_Impl::EchoUser_exec_i[user_private_ops]

  /** Session component operations */
  void EchoUser_exec_i::configuration_complete ()
  {
    //@@{__RIDL_REGEN_MARKER__} - BEGIN : Example_EchoUser_Impl::EchoUser_exec_i[configuration_complete]
    // Your code here
    //@@{__RIDL_REGEN_MARKER__} - END : Example_EchoUser_Impl::EchoUser_exec_i[configuration_complete]
  }

  void EchoUser_exec_i::ccm_activate ()
  {
    //@@{__RIDL_REGEN_MARKER__} - BEGIN : Example_EchoUser_Impl::EchoUser_exec_i[ccm_activate]
    CIAOX11_TEST_INFO << "[EchoUser] ccm_activate called" << std::endl;

    IDL::traits<Example::Echo>::ref_type echo_ref = this->context_->get_connection_use_echo ();
    if (echo_ref)
    {
      std::string answer = echo_ref->process ("Hello. How are you today?");
      CIAOX11_TEST_INFO << "[EchoUser] received answer: " << answer << std::endl;
    }
    else
    {
      CIAOX11_TEST_ERROR << "[EchoUser] NO connection!" << std::endl;
    }

    //@@{__RIDL_REGEN_MARKER__} - END : Example_EchoUser_Impl::EchoUser_exec_i[ccm_activate]
  }

  void EchoUser_exec_i::ccm_passivate ()
  {
    //@@{__RIDL_REGEN_MARKER__} - BEGIN : Example_EchoUser_Impl::EchoUser_exec_i[ccm_passivate]
    // Your code here
    //@@{__RIDL_REGEN_MARKER__} - END : Example_EchoUser_Impl::EchoUser_exec_i[ccm_passivate]
  }

  void EchoUser_exec_i::ccm_remove ()
  {
    //@@{__RIDL_REGEN_MARKER__} - BEGIN : Example_EchoUser_Impl::EchoUser_exec_i[ccm_remove]
    // Your code here
    //@@{__RIDL_REGEN_MARKER__} - END : Example_EchoUser_Impl::EchoUser_exec_i[ccm_remove]
  }

  /// Operations from Components::SessionComponent
  void
  EchoUser_exec_i::set_session_context (
    IDL::traits<Components::SessionContext>::ref_type ctx)
  {
    // Setting the context of this component.
    //@@{__RIDL_REGEN_MARKER__} - BEGIN : Example_EchoUser_Impl::EchoUser_exec_i[set_session_context]
    this->context_ = IDL::traits< ::Example::CCM_EchoUser_Context >::narrow (ctx);
    //@@{__RIDL_REGEN_MARKER__} - END : Example_EchoUser_Impl::EchoUser_exec_i[set_session_context]
  }


  //@@{__RIDL_REGEN_MARKER__} - BEGIN : Example_EchoUser_Impl[user_namespace_end_impl]
  //@@{__RIDL_REGEN_MARKER__} - END : Example_EchoUser_Impl[user_namespace_end_impl]

  //@@{__RIDL_REGEN_MARKER__} - BEGIN : Example_EchoUser_Impl[factory]
  extern "C" void
  create_Example_EchoUser_Impl (
    IDL::traits<Components::EnterpriseComponent>::ref_type& component)
  {
    component = CORBA::make_reference <EchoUser_exec_i> ();
  }
  //@@{__RIDL_REGEN_MARKER__} - END : Example_EchoUser_Impl[factory]

} // namespace Example_EchoUser_Impl
//@@{__RIDL_REGEN_MARKER__} - BEGIN : echo_user_impl.cpp[Footer]
// Your footer (code) here
// -*- END -*-
