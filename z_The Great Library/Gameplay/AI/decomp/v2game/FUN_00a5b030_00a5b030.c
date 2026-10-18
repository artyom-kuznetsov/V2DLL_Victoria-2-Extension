// FUN_00a5b030 @ 00a5b030 body=[[00a5b030, 00a5b0d4] [00a5b0d8, 00a5b1f9] [00a5b1fd, 00a5b240] [00a5b244, 00a5b283]]


/* WARNING: Removing unreachable block (ram,0x00a5b1a1) */

void FUN_00a5b030(int *param_1)

{
  uint uVar1;
  char cVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  int *in_ECX;
  uint uVar9;
  int *piVar10;
  bool bVar11;
  int *piStack_58;
  uint local_50 [4];
  undefined4 local_40;
  uint local_3c;
  uint auStack_34 [4];
  undefined4 uStack_24;
  uint uStack_20;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b4f0d8;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  if (in_ECX[0x29] != 0) {
    ExceptionList = &local_14;
    FUN_009a4b40(in_ECX[0x29],&LAB_00640b30,in_ECX + 0x28);
  }
  cVar2 = FUN_00a5aed0();
  if (cVar2 != '\0') {
    local_3c = 0xf;
    local_40 = 0;
    local_50[0] = local_50[0] & 0xffffff00;
    FUN_00409350(&DAT_00ded94d,0);
    local_c = 0;
    cVar2 = FUN_00416db0();
    local_c = 0xffffffff;
    if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_50[0]);
    }
    if (cVar2 == '\0') {
      piVar3 = (int *)(**(code **)(*param_1 + 4))(in_ECX + 0x1e);
      piStack_58 = piVar3;
      do {
        for (piVar10 = (int *)in_ECX[0x31];
            ((int *)in_ECX[0x31] <= piVar10 && (piVar10 < (int *)in_ECX[0x32]));
            piVar10 = piVar10 + 1) {
          iVar5 = *piVar10;
          if (iVar5 == 0x8a) {
            bVar11 = (short)in_ECX[0x25] == 0;
LAB_00a5b124:
            if (bVar11) goto LAB_00a5b12b;
          }
          else {
            if (iVar5 == 0xa1) {
              bVar11 = in_ECX[0x1c] == 0;
              goto LAB_00a5b124;
            }
LAB_00a5b12b:
            if (iVar5 == 0x8a) {
              piVar4 = piVar3 + 0x25;
            }
            else if (iVar5 == 0xa1) {
              piVar4 = piVar3 + 0x1a;
            }
            else {
              piVar4 = (int *)0x0;
            }
            if (iVar5 == 0x8a) {
              *(short *)(in_ECX + 0x25) = (short)*piVar4;
            }
          }
        }
        cVar2 = FUN_00a5aed0();
        if (cVar2 != '\0') {
          iVar5 = (**(code **)(*piVar3 + 0x20))(local_50);
          puStack_10 = (undefined1 *)0x1;
          iVar6 = (**(code **)(*in_ECX + 0x18))();
          uVar7 = *(uint *)(iVar6 + 0x10);
          uVar1 = *(uint *)(iVar5 + 0x10);
          uVar9 = uVar1;
          if (uVar7 <= uVar1) {
            uVar9 = uVar7;
          }
          iVar5 = FUN_00414bd0(uVar9);
          bVar11 = false;
          if (iVar5 == 0) {
            if (uVar1 < uVar7) {
              uVar7 = 0xffffffff;
            }
            else {
              uVar7 = (uint)(uVar1 != uVar7);
            }
            bVar11 = uVar7 == 0;
          }
          local_c = 0xffffffff;
          if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b(local_50[0]);
          }
          if (!bVar11) {
            uVar8 = (**(code **)(*piStack_58 + 0x20))(auStack_34);
            puStack_10 = (undefined1 *)0x2;
            piStack_58 = (int *)(**(code **)(*param_1 + 4))(uVar8);
            local_c = 0xffffffff;
            if (0xf < uStack_20) {
                    /* WARNING: Subroutine does not return */
              FUN_00aae91b(auStack_34[0]);
            }
            uStack_20 = 0xf;
            uStack_24 = 0;
            auStack_34[0] = auStack_34[0] & 0xffffff00;
          }
          local_c = 0xffffffff;
          piVar3 = piStack_58;
        }
        cVar2 = FUN_00a5aed0();
      } while (cVar2 != '\0');
    }
  }
  ExceptionList = local_14;
  return;
}

