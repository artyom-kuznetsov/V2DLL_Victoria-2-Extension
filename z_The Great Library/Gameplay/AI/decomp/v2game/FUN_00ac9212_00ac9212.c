// ___unDName @ 00ac9212 body=[[00ac9212, 00ac92a2]]


/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    ___unDName
   
   Library: Visual Studio 2010 Release */

char * ___unDName(char *param_1,char *param_2,int param_3,int param_4,undefined4 param_5,
                 ushort param_6)

{
  int iVar1;
  UnDecorator local_78 [88];
  char *local_20;
  undefined4 uStack_c;
  undefined *local_8;
  
  local_8 = &DAT_00e6c568;
  uStack_c = 0xac921e;
  if ((param_4 != 0) && (iVar1 = __mtinitlocknum(5), iVar1 != 0)) {
    __lock(5);
    local_8 = (undefined *)0x0;
    DAT_00f20958 = param_4;
    _DAT_00f2095c = param_5;
    _DAT_00f20968 = 0;
    _DAT_00f20960 = 0;
    _DAT_00f20964 = 0;
    UnDecorator::UnDecorator
              (local_78,param_1,param_2,param_3,(_func_char_ptr_long *)0x0,(uint)param_6);
    local_20 = UnDecorator::operator_char_(local_78);
    Destructor();
    local_8 = (undefined *)0xfffffffe;
    FUN_00ac92a3();
    return local_20;
  }
  return (char *)0x0;
}

