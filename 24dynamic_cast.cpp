//dynamic_cast 主要用于类与类之间的 类里面必须有虚函数
/*
                  A
                 / \
                B   C         <----(指针)
               /     \
              D       F        
*/
//动态转换  可以向上、向下转换（指针可以指向C、F、A上下转换） 可以进行类型检测 如果转换失败会返回NULL  比较安全
    FHello* hh = new FHello1();
//想让hh转换为派生类 FHello1 向下转换
    FHello1* aa = dynamic_cast<FHello1*>(hh);
//向上转换 
    FHello1* hh = new FHello();
    FHello1* aa = dynamic_cast<FHello>(hh);
//但一般直接进行隐式转换
    FHello* hh1=aa;//进行隐式转换

//最重要的是  因为转换检测时是根据虚函数表检测的，所以必须要保证接口里必须有虚函数  
