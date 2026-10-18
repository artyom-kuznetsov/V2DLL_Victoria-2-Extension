// FUN_009ce1e0 @ 009ce1e0 body=[[009ce1e0, 009ce280] [009ce284, 009ce29c] [009ce2a0, 009ce3a0] [009ce3a4, 009ce3e7] [009ce3eb, 009ce465]]


/* WARNING: Removing unreachable block (ram,0x009ce344) */

void FUN_009ce1e0(int *param_1)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  int *in_ECX;
  uint uVar7;
  undefined4 *puVar8;
  bool bVar9;
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
  if (in_ECX[0x55] != 0) {
    ExceptionList = &local_14;
    FUN_009a4b40(in_ECX[0x55],&LAB_00640b30,in_ECX + 0x54);
  }
  cVar2 = FUN_009cde30();
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
      piStack_58 = (int *)(**(code **)(*param_1 + 4))(in_ECX + 0x1a);
      do {
        for (puVar8 = (undefined4 *)in_ECX[0x5d];
            ((undefined4 *)in_ECX[0x5d] <= puVar8 && (puVar8 < (undefined4 *)in_ECX[0x5e]));
            puVar8 = puVar8 + 1) {
          cVar2 = FUN_009d0880(*puVar8);
          if (cVar2 == '\0') {
            FUN_009d0c00();
            FUN_009d0de0(in_ECX);
          }
        }
        puVar8 = (undefined4 *)in_ECX[0x5d];
        while( true ) {
          if ((puVar8 < (undefined4 *)in_ECX[0x5d]) || ((undefined4 *)in_ECX[0x5e] <= puVar8))
          goto LAB_009ce400;
          cVar2 = FUN_009d0880(*puVar8);
          if (cVar2 == '\0') break;
          puVar8 = puVar8 + 1;
        }
        iVar3 = (**(code **)(*piStack_58 + 0x20))(local_50);
        puStack_10 = (undefined1 *)0x1;
        iVar4 = (**(code **)(*in_ECX + 0x18))();
        uVar5 = *(uint *)(iVar4 + 0x10);
        uVar1 = *(uint *)(iVar3 + 0x10);
        uVar7 = uVar5;
        if (uVar1 < uVar5) {
          uVar7 = uVar1;
        }
        iVar3 = FUN_00414bd0(uVar7);
        bVar9 = false;
        if (iVar3 == 0) {
          if (uVar1 < uVar5) {
            uVar5 = 0xffffffff;
          }
          else {
            uVar5 = (uint)(uVar1 != uVar5);
          }
          bVar9 = uVar5 == 0;
        }
        local_c = 0xffffffff;
        if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_50[0]);
        }
        if (!bVar9) {
          uVar6 = (**(code **)(*piStack_58 + 0x20))(auStack_34);
          puStack_10 = (undefined1 *)0x2;
          piStack_58 = (int *)(**(code **)(*param_1 + 4))(uVar6);
          local_c = 0xffffffff;
          if (0xf < uStack_20) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b(auStack_34[0]);
          }
          uStack_20 = 0xf;
          uStack_24 = 0;
          auStack_34[0] = auStack_34[0] & 0xffffff00;
        }
LAB_009ce400:
        puVar8 = (undefined4 *)in_ECX[0x5d];
        while( true ) {
          if ((puVar8 < (undefined4 *)in_ECX[0x5d]) || ((undefined4 *)in_ECX[0x5e] <= puVar8))
          goto LAB_009ce42b;
          cVar2 = FUN_009d0880(*puVar8);
          if (cVar2 == '\0') break;
          puVar8 = puVar8 + 1;
        }
      } while( true );
    }
  }
LAB_009ce42b:
  if ((char)in_ECX[0x95] != '\0') {
    iVar3 = *(int *)(in_ECX[0x52] + 0x6b9c0);
    in_ECX[0x2a] = *(int *)(in_ECX[0x52] + 0x6b9bc);
    in_ECX[0x2b] = iVar3;
  }
  ExceptionList = local_14;
  return;
}

