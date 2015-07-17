/*
 * Copyright (c) 2015 ARM. All rights reserved.
 */
//CppUTest includes should be after your and system includes
#include "CppUTest/TestHarness.h"
#include "test_m2mconnectionhandlerpimpl_linux.h"

TEST_GROUP(M2MConnectionHandlerPimpl_linux)
{
  Test_M2MConnectionHandlerPimpl_linux* handler;

  void setup()
  {
    handler = new Test_M2MConnectionHandlerPimpl_linux();
  }
  void teardown()
  {
    delete handler;
  }
};


TEST(M2MConnectionHandlerPimpl_linux, create)
{
    CHECK(handler != NULL);
}

TEST(M2MConnectionHandlerPimpl_linux, test_bind_connection)
{
    handler->test_bind_connection();
}

TEST(M2MConnectionHandlerPimpl_linux, test_resolve_server_address)
{
    handler->test_resolve_server_address();
}

TEST(M2MConnectionHandlerPimpl_linux, test_start_listening_for_data)
{
    handler->test_start_listening_for_data();
}

TEST(M2MConnectionHandlerPimpl_linux, test_data_receive)
{
    handler->test_data_receive();
}

TEST(M2MConnectionHandlerPimpl_linux, test_send_data)
{
    handler->test_send_data();
}

TEST(M2MConnectionHandlerPimpl_linux, test_stop_listening)
{
    handler->test_stop_listening();
}

TEST(M2MConnectionHandlerPimpl_linux, test_sendToSocket)
{
    handler->test_sendToSocket();
}

TEST(M2MConnectionHandlerPimpl_linux, test_receiveFromSocket)
{
    handler->test_receiveFromSocket();
}