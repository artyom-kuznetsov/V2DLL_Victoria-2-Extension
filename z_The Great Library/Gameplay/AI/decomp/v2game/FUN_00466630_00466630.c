// FUN_00466630 @ 00466630 body=[[00466630, 00466745] [0046674c, 00466765] [00466769, 00466779]]


void FUN_00466630(void)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  int *piVar4;
  undefined4 in_ECX;
  uint *in_EDX;
  int iVar5;
  undefined4 *local_38;
  undefined4 *local_34;
  undefined4 local_30;
  undefined1 local_28 [8];
  int local_20 [3];
  undefined4 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b53c28;
  local_10 = ExceptionList;
  local_38 = (undefined4 *)0x0;
  local_34 = (undefined4 *)0x0;
  local_30 = 0;
  local_8 = 0;
  ExceptionList = &local_10;
  FUN_0045be80(in_ECX,&local_38);
  iVar5 = ((int)local_34 - (int)local_38) / 0x1c;
  if (0 < iVar5) {
    local_14 = local_38;
    local_20[2] = iVar5;
    do {
      puVar3 = local_14;
      if (0xf < (uint)local_14[5]) {
        puVar3 = (undefined4 *)*local_14;
      }
      piVar4 = (int *)FUN_0055c6c0(DAT_012587e4,local_28,puVar3);
      iVar5 = *piVar4;
      iVar1 = piVar4[1];
      piVar4 = (int *)in_EDX[1];
      local_20[0] = iVar5;
      local_20[1] = iVar1;
      if (local_20 < piVar4) {
        if (local_20 < (int *)*in_EDX) goto LAB_004666fd;
        iVar5 = (int)local_20 - (int)*in_EDX >> 3;
        if (piVar4 == (int *)in_EDX[2]) {
          FUN_00810820();
        }
        puVar3 = (undefined4 *)in_EDX[1];
        if (puVar3 != (undefined4 *)0x0) {
          uVar2 = *in_EDX;
          *puVar3 = *(undefined4 *)(uVar2 + iVar5 * 8);
          puVar3[1] = *(undefined4 *)(uVar2 + 4 + iVar5 * 8);
        }
      }
      else {
LAB_004666fd:
        if (piVar4 == (int *)in_EDX[2]) {
          FUN_00810820();
        }
        piVar4 = (int *)in_EDX[1];
        if (piVar4 != (int *)0x0) {
          *piVar4 = iVar5;
          piVar4[1] = iVar1;
        }
      }
      in_EDX[1] = in_EDX[1] + 8;
      local_14 = local_14 + 7;
      local_20[2] = local_20[2] + -1;
    } while (local_20[2] != 0);
    local_20[2] = 0;
  }
  puVar3 = local_38;
  if (local_38 == (undefined4 *)0x0) {
    ExceptionList = local_10;
    return;
  }
  while( true ) {
    if (puVar3 == local_34) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_38);
    }
    if (0xf < (uint)puVar3[5]) break;
    puVar3[5] = 0xf;
    puVar3[4] = 0;
    *(undefined1 *)puVar3 = 0;
    puVar3 = puVar3 + 7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(*puVar3);
}

