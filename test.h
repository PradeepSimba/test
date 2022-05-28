#include <QWidget>

#if defined MAKE_TEST_LIB
    #define TEST_LIB_EXPORT Q_DECL_EXPORT
#else
    #define TEST_LIB_EXPORT Q_DECL_IMPORT
#endif
    
class TEST_LIB_EXPORT Widget : public QWidget
{
    Q_OBJECT
public:
    Widget(QWidget *parent = nullptr);
};