#include "vm.h"
#include "pod_sys_struct.h"
#include "pod_sys_native.h"

#include "FType.h"
//
//void sys_Obj_make_f(fr_Env env, fr_Obj self) {
//    return;
//}
//fr_Bool sys_Obj_equals_f(fr_Env env, fr_Obj self, fr_Obj that) {
//    return self == that;
//}
//fr_Int sys_Obj_compare_f(fr_Env env, fr_Obj self, fr_Obj that) {
//    return (char*)self - (char*)that;
//}
//fr_Int sys_Obj_hash_f(fr_Env env, fr_Obj self) {
//    return (fr_Int)self;
//}
//fr_Obj sys_Obj_toStr_f(fr_Env env, fr_Obj self) {
//
//    char buf[128];
//    buf[0] = 0;
//
//    fr_Type ftype = fr_getObjType(env, self);
//    std::string &name = ((FType*)ftype)->c_name;
//
//    snprintf(buf, 128, "%p@%s", (void*)self, name.c_str());
//    return fr_newStrUtf8(env, buf);
//}
fr_Obj sys_Obj_trap_f(fr_Env env, fr_Obj self, fr_Obj name, fr_Obj args) {
    fr_Value val;
    val.h = (self);
    //val.type = fr_vtHandle;
    
    if (args) {
        //TODO
    }
    
    const char *sname = fr_getStrUtf8(env, name, nullptr);
    fr_Value ret;
    fr_callOnObj(env, sname, 1+0, &val, &ret);
    //TODO
    return 0;
}
//
//fr_Bool sys_Obj_isImmutable_f(fr_Env env, fr_Obj self) {
//    return 0;
//}
//fr_Obj sys_Obj_toImmutable_f(fr_Env env, fr_Obj self) {
//    return 0;
//}
//fr_Obj sys_Obj_typeof_f(fr_Env env, fr_Obj self) {
//    fr_Type ftype = fr_getObjType(env, self);
//    fr_Obj obj = fr_toTypeObj(env, ftype);
//    return obj;
//}
//void sys_Obj_finalize_f(fr_Env env, fr_Obj self) {
//    return;
//}

//void sys_Obj_echo_f(fr_Env env, fr_Obj x) {
//    fr_Obj str;
//    const char *utf8;
//    fr_Value val;
//    val.h = x;
//
//    str = fr_objToStr(env, val, fr_vtHandle);
//
//    utf8 = fr_getStrUtf8(env, str, nullptr);
//
//    puts(utf8);
//    return;
//}

//void sys_Obj_static__init_f(fr_Env env) {
//    return;
//}

