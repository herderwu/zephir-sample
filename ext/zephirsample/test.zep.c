
#ifdef HAVE_CONFIG_H
#include "../ext_config.h"
#endif

#include <php.h>
#include "../php_ext.h"
#include "../ext.h"

#include <Zend/zend_operators.h>
#include <Zend/zend_exceptions.h>
#include <Zend/zend_interfaces.h>

#include "kernel/main.h"
#include "kernel/operators.h"
#include "kernel/memory.h"


ZEPHIR_INIT_CLASS(ZephirSample_Test) {

	ZEPHIR_REGISTER_CLASS(ZephirSample, Test, zephirsample, test, zephirsample_test_method_entry, 0);

	return SUCCESS;

}

PHP_METHOD(ZephirSample_Test, add) {

	zval *a_param = NULL, *b_param = NULL;
	int a, b;

	zephir_fetch_params(0, 2, 0, &a_param, &b_param);

	a = zephir_get_intval(a_param);
	b = zephir_get_intval(b_param);


	RETURN_LONG((a + b));

}

