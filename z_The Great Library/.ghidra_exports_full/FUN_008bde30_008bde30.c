// FUN_008bde30 @ 008bde30 body=[[008bde30, 008bdfa0]]


undefined4 FUN_008bde30(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int in_ECX;
  int iVar5;
  undefined4 local_10;
  undefined4 local_c;
  
  iVar5 = *(int *)(in_ECX + 0x1c);
  if (iVar5 == 0) {
    iVar5 = *(int *)(param_1 + 0x10);
  }
  iVar5 = *(int *)(*(int *)(DAT_012588e8 + 0xacc) + iVar5 * 4);
  if (*(char *)(in_ECX + 0x18) == '\0') {
    if (*(char *)(in_ECX + 0x19) == '\0') {
      if (*(char *)(in_ECX + 0x20) == '\0') {
        if (*(int *)(in_ECX + 0x28) == 0) {
          cVar1 = FUN_004b64e0();
          if (cVar1 != '\0') {
            return 1;
          }
        }
        else {
          cVar1 = FUN_004b64e0();
          if (cVar1 != '\0') {
            return 1;
          }
        }
      }
      else {
        iVar3 = FUN_009c16d0(*(undefined4 *)(param_1 + 0x38),*(undefined4 *)(param_1 + 0x3c));
        if (iVar3 != 0) {
          if (*(int *)(*(int *)(iVar3 + 0x30) + 0x100) != 6) {
            local_c = *(undefined4 *)(iVar3 + 0x48);
            local_10 = *(undefined4 *)(iVar3 + 0x44);
            uVar4 = FUN_004b64e0();
            return uVar4;
          }
          if (*(int *)(*(int *)(iVar3 + 0x30) + 0xfc) != 6) {
            FUN_004e4d40(iVar3,&local_10,iVar5);
            uVar4 = FUN_004b64e0();
            return uVar4;
          }
        }
      }
    }
    else {
      iVar3 = *(int *)(iVar5 + 0x14c);
      iVar5 = *(int *)(iVar5 + 0x148);
      if (iVar5 != iVar3) {
        do {
          if (*(int *)(iVar5 + 4) == *(int *)(param_1 + 0x30)) break;
          iVar5 = iVar5 + 8;
        } while (iVar5 != iVar3);
        if (iVar5 != iVar3) {
          return 1;
        }
      }
    }
  }
  else {
    iVar2 = FUN_008a8dc0();
    iVar3 = *(int *)(iVar5 + 0x14c);
    iVar5 = *(int *)(iVar5 + 0x148);
    if (iVar5 != iVar3) {
      do {
        if (*(int *)(iVar5 + 4) == *(int *)(iVar2 + 4)) break;
        iVar5 = iVar5 + 8;
      } while (iVar5 != iVar3);
      if (iVar5 != iVar3) {
        return 1;
      }
    }
  }
  return 0;
}

