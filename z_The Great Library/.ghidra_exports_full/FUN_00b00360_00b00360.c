// FUN_00b00360 @ 00b00360 body=[[00b00360, 00b003bf]]


void FUN_00b00360(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int *in_ECX;
  uint uVar3;
  
  *in_ECX = 0;
  in_ECX[1] = param_1;
  in_ECX[2] = param_1;
  *(short *)(in_ECX + 3) = (short)param_2;
  if (param_1 != 0) {
    iVar1 = (*(code *)PTR_FUN_00f01b08)(param_1 * 0xc,param_2,4,2,0,0xffffffff);
    uVar3 = 0;
    *in_ECX = iVar1;
    if (in_ECX[1] != 0) {
      iVar1 = 0;
      do {
        puVar2 = (undefined4 *)(*in_ECX + iVar1);
        if (puVar2 != (undefined4 *)0x0) {
          *puVar2 = 0;
          puVar2[1] = 0;
          puVar2[2] = 0;
        }
        uVar3 = uVar3 + 1;
        iVar1 = iVar1 + 0xc;
      } while (uVar3 < (uint)in_ECX[1]);
    }
  }
  return;
}

