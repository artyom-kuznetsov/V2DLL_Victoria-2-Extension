// FUN_00b25710 @ 00b25710 body=[[00b25710, 00b25749]]


void FUN_00b25710(int param_1,char *param_2,undefined4 param_3,code *param_4,undefined4 param_5,
                 undefined4 param_6)

{
  int iVar1;
  int iVar2;
  
  if (*param_2 == '\0') {
    iVar2 = *(int *)(param_1 + 0x14);
    for (iVar1 = *(int *)(param_1 + 0x10); iVar1 != 0; iVar1 = iVar1 + -1) {
      (*param_4)(param_6,param_5,iVar2);
      iVar2 = iVar2 + 0x18;
    }
  }
  return;
}

