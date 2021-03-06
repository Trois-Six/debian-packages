/*
  +----------------------------------------------------------------------+
  | PHP Version 5                                                        |
  +----------------------------------------------------------------------+
  | Copyright (c) 1997-2007 The PHP Group                                |
  +----------------------------------------------------------------------+
  | This source file is subject to version 3.01 of the PHP license,      |
  | that is bundled with this package in the file LICENSE, and is        |
  | available through the world-wide-web at the following url:           |
  | http://www.php.net/license/3_01.txt                                  |
  | If you did not receive a copy of the PHP license and are unable to   |
  | obtain it through the world-wide-web, please send a note to          |
  | license@php.net so we can mail you a copy immediately.               |
  +----------------------------------------------------------------------+
  | Author: Alexandre Kalendarev akalend@mail.ru Copyright (c) 2009-2010 |
  | Lead:                                                                |
  | - Pieter de Zwart                                                    |
  | Maintainers:                                                         |
  | - Brad Rodriguez                                                     |
  | - Jonathan Tansavatdi                                                |
  +----------------------------------------------------------------------+
*/

/* $Id: amqp_channel.h 305865 2010-12-01 01:30:56Z pdezwart $ */


void amqp_channel_dtor(void *object TSRMLS_DC);
zend_object_value amqp_channel_ctor(zend_class_entry *ce TSRMLS_DC);

PHP_METHOD(amqp_channel_class, __construct);
PHP_METHOD(amqp_channel_class, isConnected);
PHP_METHOD(amqp_channel_class, getChannelId);
PHP_METHOD(amqp_channel_class, setPrefetchSize);
PHP_METHOD(amqp_channel_class, getPrefetchSize);
PHP_METHOD(amqp_channel_class, setPrefetchCount);
PHP_METHOD(amqp_channel_class, getPrefetchCount);
PHP_METHOD(amqp_channel_class, qos);

PHP_METHOD(amqp_channel_class, startTransaction);
PHP_METHOD(amqp_channel_class, commitTransaction);
PHP_METHOD(amqp_channel_class, rollbackTransaction);

/*
*Local variables:
*tab-width: 4
*c-basic-offset: 4
*End:
*vim600: noet sw=4 ts=4 fdm=marker
*vim<600: noet sw=4 ts=4
*/
