// FUN_0094e4d0 @ 0094e4d0 body=[[0094e4d0, 0094e655]]


void FUN_0094e4d0(int param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  char cVar4;
  uint *in_ECX;
  int *piVar5;
  undefined1 local_c0 [8];
  undefined4 local_b8;
  undefined4 local_b4;
  undefined1 local_78 [24];
  undefined4 local_60;
  undefined1 *local_54;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_1c;
  int local_18 [2];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b3f598;
  local_10 = ExceptionList;
  local_2c = 0;
  local_28 = 0;
  local_24 = 0;
  local_8 = 0;
  if (*(char *)(*(int *)(param_1 + 0xc) + 0x1dc) == '\0') {
    ExceptionList = &local_10;
    FUN_0068f390();
  }
  else {
    ExceptionList = &local_10;
    FUN_008a8650(0);
    FUN_008a8650(0);
    local_b8 = *(undefined4 *)(param_1 + 0x18);
    local_b4 = *(undefined4 *)(param_1 + 0x1c);
    local_4c = *(undefined4 *)(param_1 + 0x10);
    local_48 = *(undefined4 *)(param_1 + 0x14);
    local_54 = local_c0;
    local_1c = *(undefined4 *)(param_1 + 0x20);
    piVar5 = *(int **)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(param_1 + 0x24) * 4) + 0xe44);
    if (piVar5 != (int *)0x0) {
      do {
        iVar1 = *piVar5;
        piVar5 = (int *)piVar5[2];
        local_60 = 0;
        if ((iVar1 != 0) && ((*(int *)(iVar1 + 0x4c) - *(int *)(iVar1 + 0x48) & 0xfffffffcU) != 0))
        {
          local_60 = **(undefined4 **)(iVar1 + 0x48);
        }
        local_18[0] = iVar1;
        cVar4 = (**(code **)(*(int *)(*(int *)(param_1 + 0xc) + 0xa0) + 0x18))(local_78);
        if (cVar4 != '\0') {
          piVar2 = (int *)in_ECX[1];
          if (local_18 < piVar2) {
            piVar3 = (int *)*in_ECX;
            if (local_18 < piVar3) goto LAB_0094e5ec;
            if (piVar2 == (int *)in_ECX[2]) {
              FUN_00a513f0();
            }
            if ((undefined4 *)in_ECX[1] != (undefined4 *)0x0) {
              *(undefined4 *)in_ECX[1] =
                   *(undefined4 *)(*in_ECX + ((int)local_18 - (int)piVar3 >> 2) * 4);
            }
          }
          else {
LAB_0094e5ec:
            if (piVar2 == (int *)in_ECX[2]) {
              FUN_00a513f0();
            }
            if ((int *)in_ECX[1] != (int *)0x0) {
              *(int *)in_ECX[1] = iVar1;
            }
          }
          in_ECX[1] = in_ECX[1] + 4;
        }
        if (piVar5 == (int *)0x0) {
          ExceptionList = local_10;
          return;
        }
      } while( true );
    }
  }
  ExceptionList = local_10;
  return;
}

