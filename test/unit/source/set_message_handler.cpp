//System Includes
#include <memory>

//Project Includes
#include "corvusoft/network/tcpip_adaptor.hpp"

//External Includes
#include <catch.hpp>

//System Namespaces
using std::shared_ptr;

//Project Namespaces
using corvusoft::network::TCPIPAdaptor;

//External Namespaces

TEST_CASE( "set message handler" )
{
    auto adaptor = TCPIPAdaptor::create( );
    REQUIRE_NOTHROW( adaptor->set_message_handler( nullptr ) );
}