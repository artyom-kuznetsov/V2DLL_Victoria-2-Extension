// FUN_00b15c30 @ 00b15c30 body=[[00b15c30, 00b15cb5]]


/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void FUN_00b15c30(char *param_1)

{
  int *piVar1;
  uint uVar2;
  int *piVar3;
  uint uVar4;
  char local_1004 [4096];
  uint local_4;
  
  local_4 = DAT_00ef259c ^ (uint)local_1004;
  _vsprintf(local_1004,param_1,&stack0x00000008);
  piVar1 = *(int **)(DAT_00f209e4 + 4);
  uVar2 = piVar1[1];
  uVar4 = 0;
  if (uVar2 != 0) {
    do {
      piVar3 = *(int **)(*piVar1 + uVar4 * 4);
      if ((*(byte *)(piVar3 + 1) & 8) != 0) {
        (**(code **)(*piVar3 + 4))(local_1004,8);
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar2);
  }
  __security_check_cookie(local_4 ^ (uint)local_1004);
  return;
}

