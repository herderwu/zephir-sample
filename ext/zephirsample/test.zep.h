
extern zend_class_entry *zephirsample_test_ce;

ZEPHIR_INIT_CLASS(ZephirSample_Test);

PHP_METHOD(ZephirSample_Test, add);

ZEND_BEGIN_ARG_INFO_EX(arginfo_zephirsample_test_add, 0, 0, 2)
	ZEND_ARG_INFO(0, a)
	ZEND_ARG_INFO(0, b)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(zephirsample_test_method_entry) {
	PHP_ME(ZephirSample_Test, add, arginfo_zephirsample_test_add, ZEND_ACC_PUBLIC)
	PHP_FE_END
};
