// ___RTtypeid @ 00ab0946 body=[[00ab0946, 00ab09a4]]


/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    ___RTtypeid
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release, Visual Studio 2012 Release */

void ___RTtypeid(int *param_1)

{
  undefined *puVar1;
  bad_typeid local_28 [28];
  undefined4 uStack_c;
  undefined *local_8;
  
  local_8 = &DAT_00e6be40;
  uStack_c = 0xab0952;
  if (param_1 == (int *)0x0) {
    std::bad_typeid::bad_typeid(local_28,"Attempted a typeid of NULL pointer!");
    puVar1 = &DAT_00e6be2c;
  }
  else {
    local_8 = (undefined *)0x0;
    if (*(int *)(*(int *)(*param_1 + -4) + 0xc) != 0) {
      return;
    }
    std::__non_rtti_object::__non_rtti_object
              ((__non_rtti_object *)local_28,"Bad read pointer - no RTTI data!");
    puVar1 = &DAT_00e6be1c;
  }
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(local_28,puVar1);
}

