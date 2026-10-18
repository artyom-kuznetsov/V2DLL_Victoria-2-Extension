// FUN_00a59790 @ 00a59790 body=[[00a59790, 00a59833] [00a59837, 00a59857] [00a59860, 00a59979] [00a59980, 00a59a3c] [00a59a40, 00a59a83] [00a59a87, 00a59ade]]


/* WARNING: Removing unreachable block (ram,0x00a599e0) */

void FUN_00a59790(int *param_1)

{
  uint uVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  int *in_ECX;
  uint uVar8;
  undefined4 *puVar9;
  bool bVar10;
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
  if (in_ECX[0x49] != 0) {
    ExceptionList = &local_14;
    FUN_009a4b40(in_ECX[0x49],&LAB_00640b30,in_ECX + 0x48);
  }
  cVar2 = FUN_00a59e80();
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
      piVar3 = (int *)(**(code **)(*param_1 + 4))(in_ECX + 0x21);
      piStack_58 = piVar3;
      do {
        puVar9 = (undefined4 *)in_ECX[0x51];
        while (((undefined4 *)in_ECX[0x51] <= puVar9 && (puVar9 < (undefined4 *)in_ECX[0x52]))) {
          cVar2 = FUN_00a59ec0(*puVar9);
          if (cVar2 == '\0') {
            uVar7 = *puVar9;
            switch(uVar7) {
            case 0x2e:
              FUN_00a5a190(uVar7);
              puVar9 = puVar9 + 1;
              break;
            default:
              FUN_00a5a190(uVar7);
              goto LAB_00a5996a;
            case 0x4b:
              FUN_00a5a190(uVar7);
              puVar9 = puVar9 + 1;
              break;
            case 0x83:
              FUN_00a5a190(uVar7);
              puVar9 = puVar9 + 1;
              break;
            case 0x84:
              FUN_00a5a190(uVar7);
              puVar9 = puVar9 + 1;
              break;
            case 0x8a:
              FUN_00a5a190(uVar7);
              puVar9 = puVar9 + 1;
              break;
            case 0x99:
              FUN_00a5a190(uVar7);
              puVar9 = puVar9 + 1;
              break;
            case 0xb4:
              FUN_00a5a190(uVar7);
              puVar9 = puVar9 + 1;
              break;
            case 0xb5:
              FUN_00a5a190(uVar7);
              puVar9 = puVar9 + 1;
              break;
            case 0xbf:
              FUN_00a5a190(uVar7);
              puVar9 = puVar9 + 1;
            }
          }
          else {
LAB_00a5996a:
            puVar9 = puVar9 + 1;
          }
        }
        puVar9 = (undefined4 *)in_ECX[0x51];
        while( true ) {
          if ((puVar9 < (undefined4 *)in_ECX[0x51]) || ((undefined4 *)in_ECX[0x52] <= puVar9))
          goto LAB_00a59aa0;
          cVar2 = FUN_00a59ec0(*puVar9);
          if (cVar2 == '\0') break;
          puVar9 = puVar9 + 1;
        }
        iVar4 = (**(code **)(*piVar3 + 0x20))(local_50);
        puStack_10 = (undefined1 *)0x1;
        iVar5 = (**(code **)(*in_ECX + 0x18))();
        uVar6 = *(uint *)(iVar5 + 0x10);
        uVar1 = *(uint *)(iVar4 + 0x10);
        uVar8 = uVar6;
        if (uVar1 < uVar6) {
          uVar8 = uVar1;
        }
        iVar4 = FUN_00414bd0(uVar8);
        bVar10 = false;
        if (iVar4 == 0) {
          if (uVar1 < uVar6) {
            uVar6 = 0xffffffff;
          }
          else {
            uVar6 = (uint)(uVar1 != uVar6);
          }
          bVar10 = uVar6 == 0;
        }
        local_c = 0xffffffff;
        if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_50[0]);
        }
        if (!bVar10) {
          uVar7 = (**(code **)(*piStack_58 + 0x20))(auStack_34);
          puStack_10 = (undefined1 *)0x2;
          piStack_58 = (int *)(**(code **)(*param_1 + 4))(uVar7);
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
LAB_00a59aa0:
        puVar9 = (undefined4 *)in_ECX[0x51];
        while( true ) {
          if (puVar9 < (undefined4 *)in_ECX[0x51]) {
            ExceptionList = local_14;
            return;
          }
          if ((undefined4 *)in_ECX[0x52] <= puVar9) {
            ExceptionList = local_14;
            return;
          }
          cVar2 = FUN_00a59ec0(*puVar9);
          if (cVar2 == '\0') break;
          puVar9 = puVar9 + 1;
        }
      } while( true );
    }
  }
  ExceptionList = local_14;
  return;
}

