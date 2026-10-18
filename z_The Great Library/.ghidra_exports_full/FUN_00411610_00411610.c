// FUN_00411610 @ 00411610 body=[[00411610, 0041172f]]


void FUN_00411610(void)

{
  int iVar1;
  undefined4 uVar2;
  int in_ECX;
  int *piVar3;
  int iVar4;
  float10 fVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b5856b;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (DAT_00f20c18 == (undefined4 *)0x0) {
    ExceptionList = &local_10;
    DAT_00f20c18 = (undefined4 *)FUN_00aae9af(4);
    if (DAT_00f20c18 == (undefined4 *)0x0) {
      DAT_00f20c18 = (undefined4 *)0x0;
    }
    else {
      *DAT_00f20c18 = &PTR_FUN_00e38b28;
    }
  }
  fVar5 = (float10)(**(code **)(*DAT_01258a8c + 0x14))();
  if ((float10)*(double *)(in_ECX + 0x3b0) + (float10)2.0 <= fVar5) {
    piVar3 = (int *)(*(int *)(in_ECX + 0x3a4) * 0x10 + *(int *)(in_ECX + 0x350));
    *(double *)(in_ECX + 0x3b0) = (double)fVar5;
    iVar1 = *piVar3;
    iVar4 = 0;
    if (0 < (int)(piVar3[1] - iVar1 & 0xfffffffcU)) {
      do {
        iVar1 = *(int *)(iVar1 + iVar4 * 4);
        if (*(char *)(iVar1 + 0x21c) != '\0') {
          *(undefined1 *)(iVar1 + 0x21c) = 0;
          iVar1 = FUN_00aae9af(0x44);
          local_8 = 0;
          if (iVar1 == 0) {
            uVar2 = 0;
          }
          else {
            uVar2 = FUN_0040a920(iVar1,iVar4);
          }
          local_8 = 0xffffffff;
          iVar1 = (**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0x44))();
          (**(code **)(**(int **)(iVar1 + 0x38) + 0x18))(uVar2);
        }
        iVar1 = *piVar3;
        iVar4 = iVar4 + 1;
      } while (iVar4 < piVar3[1] - iVar1 >> 2);
    }
  }
  ExceptionList = local_10;
  return;
}

