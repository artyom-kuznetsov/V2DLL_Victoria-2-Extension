// FUN_00acc263 @ 00acc263 body=[[00acc263, 00acc2ef]]


void FUN_00acc263(undefined4 param_1,undefined4 param_2,int *param_3,char *param_4,rsize_t param_5)

{
  int *piVar1;
  char *pcVar2;
  int iVar3;
  errno_t eVar4;
  undefined4 in_stack_ffffffb0;
  undefined2 uVar5;
  undefined4 local_34;
  undefined4 uStack_30;
  undefined2 uStack_2c;
  char *local_28;
  short local_24;
  char local_22;
  char local_20 [24];
  uint local_8;
  
  piVar1 = param_3;
  uVar5 = (undefined2)((uint)in_stack_ffffffb0 >> 0x10);
  local_8 = DAT_00ef259c ^ (uint)&stack0xfffffffc;
  local_28 = param_4;
  ___dtold(&local_34,&param_1);
  iVar3 = _I10_OUTPUT(local_34,uStack_30,CONCAT22(uVar5,uStack_2c),0x11,0,&local_24);
  pcVar2 = local_28;
  piVar1[2] = iVar3;
  *piVar1 = (int)local_22;
  piVar1[1] = (int)local_24;
  eVar4 = _strcpy_s(local_28,param_5,local_20);
  if (eVar4 == 0) {
    piVar1[3] = (int)pcVar2;
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
}

