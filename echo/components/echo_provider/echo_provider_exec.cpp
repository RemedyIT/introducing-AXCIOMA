// -*- C++ -*-
/*
 * Your header here.
 */
//@@{__RIDL_REGEN_MARKER__} - HEADER_END : echo_provider_impl.cpp[Header]

#include "echo_provider_exec.h"

//@@{__RIDL_REGEN_MARKER__} - BEGIN : Example_EchoProvider_Impl[user_includes]
#include <ciaox11/testlib/ciaox11_testlog.h>
//@@{__RIDL_REGEN_MARKER__} - END : Example_EchoProvider_Impl[user_includes]

//@@{__RIDL_REGEN_MARKER__} - BEGIN : Example_EchoProvider_Impl[user_global_impl]
// Your declarations here
//@@{__RIDL_REGEN_MARKER__} - END : Example_EchoProvider_Impl[user_global_impl]

namespace Example_EchoProvider_Impl
{
  //@@{__RIDL_REGEN_MARKER__} - BEGIN : Example_EchoProvider_Impl[user_namespace_impl]
  //@@{__RIDL_REGEN_MARKER__} - END : Example_EchoProvider_Impl[user_namespace_impl]

  /**
   * Facet Executor Implementation Class : do_echo_exec_i
   */

  //@@{__RIDL_REGEN_MARKER__} - BEGIN : Example_EchoProvider_Impl::do_echo_exec_i[ctor]
  do_echo_exec_i::do_echo_exec_i (
    IDL::traits< ::Example::CCM_EchoProvider_Context >::ref_type context)
    : context_ (std::move (context))
  {
  }
  //@@{__RIDL_REGEN_MARKER__} - END : Example_EchoProvider_Impl::do_echo_exec_i[ctor]

  do_echo_exec_i::~do_echo_exec_i ()
  {
    //@@{__RIDL_REGEN_MARKER__} - BEGIN : Example_EchoProvider_Impl::do_echo_exec_i[dtor]
    // Your code here
    //@@{__RIDL_REGEN_MARKER__} - END : Example_EchoProvider_Impl::do_echo_exec_i[dtor]
  }

  /** User defined public operations. */
  //@@{__RIDL_REGEN_MARKER__} - BEGIN : Example_EchoProvider_Impl::do_echo_exec_i[user_public_ops]
  // Your code here
  //@@{__RIDL_REGEN_MARKER__} - END : Example_EchoProvider_Impl::do_echo_exec_i[user_public_ops]

  /** User defined private operations. */
  //@@{__RIDL_REGEN_MARKER__} - BEGIN : Example_EchoProvider_Impl::do_echo_exec_i[user_private_ops]
  // Your code here
  //@@{__RIDL_REGEN_MARKER__} - END : Example_EchoProvider_Impl::do_echo_exec_i[user_private_ops]


  /** Operations and attributes from do_echo */

  std::string
  do_echo_exec_i::process (
      const std::string& text)
  {
    //@@{__RIDL_REGEN_MARKER__} - BEGIN : Example_EchoProvider_Impl::do_echo_exec_i::process[_text]
    CIAOX11_TEST_INFO << "[EchoProvider] Echo::process called with input: " << text << std::endl;
    return "Thank you for sending us: " + text;
    //@@{__RIDL_REGEN_MARKER__} - END : Example_EchoProvider_Impl::do_echo_exec_i::process[_text]
  }

  /**
   * Component Executor Implementation Class : EchoProvider_exec_i
   */
  //@@{__RIDL_REGEN_MARKER__} - BEGIN : Example_EchoProvider_Impl::EchoProvider_exec_i[ctor]
  EchoProvider_exec_i::EchoProvider_exec_i ()
  {
  }
  //@@{__RIDL_REGEN_MARKER__} - END : Example_EchoProvider_Impl::EchoProvider_exec_i[ctor]

  EchoProvider_exec_i::~EchoProvider_exec_i ()
  {
    //@@{__RIDL_REGEN_MARKER__} - BEGIN : Example_EchoProvider_Impl::EchoProvider_exec_i[dtor]
    // Your code here
    //@@{__RIDL_REGEN_MARKER__} - END : Example_EchoProvider_Impl::EchoProvider_exec_i[dtor]
  }

  /** User defined public operations. */
  //@@{__RIDL_REGEN_MARKER__} - BEGIN : Example_EchoProvider_Impl::EchoProvider_exec_i[user_public_ops]
  // Your code here
  //@@{__RIDL_REGEN_MARKER__} - END : Example_EchoProvider_Impl::EchoProvider_exec_i[user_public_ops]

  /** User defined private operations. */
  //@@{__RIDL_REGEN_MARKER__} - BEGIN : Example_EchoProvider_Impl::EchoProvider_exec_i[user_private_ops]
  // Your code here
  //@@{__RIDL_REGEN_MARKER__} - END : Example_EchoProvider_Impl::EchoProvider_exec_i[user_private_ops]

  /** Session component operations */
  void EchoProvider_exec_i::configuration_complete ()
  {
    //@@{__RIDL_REGEN_MARKER__} - BEGIN : Example_EchoProvider_Impl::EchoProvider_exec_i[configuration_complete]
    // Your code here
    //@@{__RIDL_REGEN_MARKER__} - END : Example_EchoProvider_Impl::EchoProvider_exec_i[configuration_complete]
  }

  void EchoProvider_exec_i::ccm_activate ()
  {
    //@@{__RIDL_REGEN_MARKER__} - BEGIN : Example_EchoProvider_Impl::EchoProvider_exec_i[ccm_activate]
    // Your code here
    //@@{__RIDL_REGEN_MARKER__} - END : Example_EchoProvider_Impl::EchoProvider_exec_i[ccm_activate]
  }

  void EchoProvider_exec_i::ccm_passivate ()
  {
    //@@{__RIDL_REGEN_MARKER__} - BEGIN : Example_EchoProvider_Impl::EchoProvider_exec_i[ccm_passivate]
    // Your code here
    //@@{__RIDL_REGEN_MARKER__} - END : Example_EchoProvider_Impl::EchoProvider_exec_i[ccm_passivate]
  }

  void EchoProvider_exec_i::ccm_remove ()
  {
    //@@{__RIDL_REGEN_MARKER__} - BEGIN : Example_EchoProvider_Impl::EchoProvider_exec_i[ccm_remove]
    // Your code here
    //@@{__RIDL_REGEN_MARKER__} - END : Example_EchoProvider_Impl::EchoProvider_exec_i[ccm_remove]
  }

  IDL::traits< ::Example::CCM_Echo >::ref_type
  EchoProvider_exec_i::get_do_echo ()
  {
  //@@{__RIDL_REGEN_MARKER__} - BEGIN : Example_EchoProvider_Impl::EchoProvider_exec_i[get_do_echo]
    if (!this->do_echo_)
    {
      this->do_echo_ = CORBA::make_reference <do_echo_exec_i> (this->context_);
    }
    return this->do_echo_;
  //@@{__RIDL_REGEN_MARKER__} - END : Example_EchoProvider_Impl::EchoProvider_exec_i[get_do_echo]
  }

  /// Operations from Components::SessionComponent
  void
  EchoProvider_exec_i::set_session_context (
    IDL::traits<Components::SessionContext>::ref_type ctx)
  {
    // Setting the context of this component.
    //@@{__RIDL_REGEN_MARKER__} - BEGIN : Example_EchoProvider_Impl::EchoProvider_exec_i[set_session_context]
    this->context_ = IDL::traits< ::Example::CCM_EchoProvider_Context >::narrow (std::move(ctx));
    //@@{__RIDL_REGEN_MARKER__} - END : Example_EchoProvider_Impl::EchoProvider_exec_i[set_session_context]
  }


  //@@{__RIDL_REGEN_MARKER__} - BEGIN : Example_EchoProvider_Impl[user_namespace_end_impl]
  //@@{__RIDL_REGEN_MARKER__} - END : Example_EchoProvider_Impl[user_namespace_end_impl]

} // namespace Example_EchoProvider_Impl

//@@{__RIDL_REGEN_MARKER__} - BEGIN : Example_EchoProvider_Impl[factory]
extern "C" void
create_Example_EchoProvider_Impl (
  IDL::traits<Components::EnterpriseComponent>::ref_type& component)
{
  component = CORBA::make_reference <Example_EchoProvider_Impl::EchoProvider_exec_i> ();
}
//@@{__RIDL_REGEN_MARKER__} - END : Example_EchoProvider_Impl[factory]
//@@{__RIDL_REGEN_MARKER__} - BEGIN : echo_provider_impl.cpp[Footer]
// Your footer (code) here
// -*- END -*-
