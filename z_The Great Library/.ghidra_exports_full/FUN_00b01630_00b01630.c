// FUN_00b01630 @ 00b01630 body=[[00b01630, 00b0168a] [00b01690, 00b0171d] [00b01720, 00b0178d]]


void FUN_00b01630(int param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int in_ECX;
  int *piVar6;
  uint uVar7;
  
  iVar1 = *(int *)(param_1 + 0x104);
  if (((*(ushort *)(param_2 + 0x27) >> 0xe & 1) == 0) || (iVar1 == 0)) {
    iVar5 = param_2[0x20];
    if (iVar5 == -1) {
      uVar2 = *(uint *)(param_1 + 0x84);
      uVar7 = 0;
      if (uVar2 == 0) {
        return;
      }
      do {
        uVar3 = 0;
        if (*(uint *)(in_ECX + 0x48) != 0) {
          piVar6 = *(int **)(in_ECX + 0x44);
          do {
            if (*(int *)(*piVar6 + 100) ==
                *(int *)(*(int *)(*(int *)(param_1 + 0x80) + uVar7 * 4) + 0x10)) {
              if (uVar3 != 0xffffffff) {
                *(short *)(*param_2 + uVar7 * 2) = (short)uVar3;
              }
              break;
            }
            uVar3 = uVar3 + 1;
            piVar6 = piVar6 + 1;
          } while (uVar3 < *(uint *)(in_ECX + 0x48));
        }
        uVar7 = uVar7 + 1;
        if (uVar2 <= uVar7) {
          return;
        }
      } while( true );
    }
  }
  else {
    iVar5 = param_2[0x20];
    if (iVar5 == -1) {
      uVar2 = *(uint *)(param_1 + 0x84);
      uVar7 = 0;
      if (uVar2 == 0) {
        return;
      }
      do {
        if (((*(byte *)(*(int *)(*(int *)(param_1 + 0x80) + uVar7 * 4) + 0xa4) & 2) != 0) ||
           (uVar3 = (uint)*(ushort *)(iVar1 + uVar7 * 2), uVar3 == 0xffff)) {
          uVar3 = uVar7;
        }
        uVar4 = 0;
        if (*(uint *)(in_ECX + 0x48) != 0) {
          piVar6 = *(int **)(in_ECX + 0x44);
          do {
            if (*(int *)(*piVar6 + 100) ==
                *(int *)(*(int *)(*(int *)(param_1 + 0x80) + uVar3 * 4) + 0x10)) {
              if (uVar4 != 0xffffffff) {
                *(short *)(*param_2 + uVar7 * 2) = (short)uVar4;
              }
              break;
            }
            uVar4 = uVar4 + 1;
            piVar6 = piVar6 + 1;
          } while (uVar4 < *(uint *)(in_ECX + 0x48));
        }
        uVar7 = uVar7 + 1;
        if (uVar2 <= uVar7) {
          return;
        }
      } while( true );
    }
  }
  FUN_00b00ef0(param_1,*(undefined4 *)(*(int *)(param_1 + 0x80) + iVar5 * 4),param_2);
  return;
}

