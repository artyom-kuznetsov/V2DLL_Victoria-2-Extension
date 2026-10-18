// FUN_00a35ab0 @ 00a35ab0 body=[[00a35ab0, 00a35af4] [00a35b00, 00a35c5b]]


void FUN_00a35ab0(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int in_ECX;
  int *piVar5;
  int iVar6;
  int local_14;
  int local_10;
  
  iVar2 = DAT_01258b40;
  if (DAT_01258b40 != 0) {
    iVar1 = (*(int *)(in_ECX + 0x50) - *(int *)(in_ECX + 0x4c)) / 0x1c;
    iVar6 = 0;
    if (0 < iVar1) {
      local_14 = 0;
      do {
        if (*(int *)(iVar2 + 0xbc) - *(int *)(iVar2 + 0xb8) >> 5 <= iVar6) {
          FUN_00a32140(iVar2,*(int *)(in_ECX + 0x5c) + iVar6 * 4,*(int *)(in_ECX + 0x4c) + local_14)
          ;
        }
        local_14 = local_14 + 0x1c;
        iVar6 = iVar6 + 1;
      } while (iVar6 < iVar1);
    }
    iVar1 = (*(int *)(in_ECX + 0x40) - *(int *)(in_ECX + 0x3c)) / 0x38;
    local_10 = 0;
    if (0 < iVar1) {
      local_14 = 0;
      do {
        if ((*(int *)(iVar2 + 0xcc) - *(int *)(iVar2 + 200)) / 0x54 <= local_10) {
          iVar3 = local_14 + *(int *)(in_ECX + 0x3c);
          iVar6 = *(int *)(iVar3 + 0x28);
          iVar4 = *(int *)(iVar3 + 0x2c) - iVar6 >> 2;
          if (iVar4 == 0) {
            iVar6 = 0;
          }
          iVar3 = FUN_00a32750(iVar2,iVar3 + 0xc,iVar6,iVar4);
          iVar6 = (*(int *)(iVar2 + 0xcc) - *(int *)(iVar2 + 200)) / 0x54;
          iVar4 = 0;
          if (0 < iVar6) {
            piVar5 = (int *)(*(int *)(iVar2 + 200) + 0x34);
            do {
              if (*piVar5 == iVar3) {
                iVar6 = iVar4 * 0x54 + *(int *)(iVar2 + 200);
                goto LAB_00a35bfd;
              }
              iVar4 = iVar4 + 1;
              piVar5 = piVar5 + 0x15;
            } while (iVar4 < iVar6);
          }
          iVar6 = *(int *)(iVar2 + 200);
LAB_00a35bfd:
          *(undefined4 *)(iVar6 + 0x34) = *(undefined4 *)(local_14 + 8 + *(int *)(in_ECX + 0x3c));
        }
        local_14 = local_14 + 0x38;
        local_10 = local_10 + 1;
      } while (local_10 < iVar1);
    }
    *(undefined4 *)(iVar2 + 0xe0) = *(undefined4 *)(in_ECX + 0x6c);
    *(undefined1 *)(iVar2 + 0xdc) = 1;
    FUN_00a317b0();
    FUN_00a319d0(iVar2);
    FUN_00a31b50(iVar2);
  }
  return;
}

