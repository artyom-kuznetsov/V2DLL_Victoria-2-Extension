// FUN_00a56ed0 @ 00a56ed0 body=[[00a56ed0, 00a56f73] [00a56f77, 00a56f97] [00a56fa0, 00a571dd] [00a571e1, 00a57223] [00a57227, 00a5727a]]


/* WARNING: Removing unreachable block (ram,0x00a5717a) */

void FUN_00a56ed0(int *param_1)

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
  if (in_ECX[0x59] != 0) {
    ExceptionList = &local_14;
    FUN_009a4b40(in_ECX[0x59],&LAB_00640b30,in_ECX + 0x58);
  }
  cVar2 = FUN_00a56b70();
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
      piVar3 = (int *)(**(code **)(*param_1 + 4))(in_ECX + 0x44);
      do {
        puVar9 = (undefined4 *)in_ECX[0x62];
        while (((undefined4 *)in_ECX[0x62] <= puVar9 && (puVar9 < (undefined4 *)in_ECX[99]))) {
          cVar2 = FUN_00a57d40(*puVar9);
          if (cVar2 == '\0') {
            uVar7 = *puVar9;
            switch(uVar7) {
            case 0x2e:
              FUN_00a58030(uVar7);
              puVar9 = puVar9 + 1;
              break;
            default:
              FUN_00a58030(uVar7);
              goto LAB_00a57100;
            case 0x4b:
              FUN_00a58030(uVar7);
              puVar9 = puVar9 + 1;
              break;
            case 0x83:
              FUN_00a58030(uVar7);
              puVar9 = puVar9 + 1;
              break;
            case 0x85:
              FUN_00a58030(uVar7);
              puVar9 = puVar9 + 1;
              break;
            case 0x86:
              FUN_00a58030(uVar7);
              puVar9 = puVar9 + 1;
              break;
            case 0x87:
              FUN_00a58030(uVar7);
              puVar9 = puVar9 + 1;
              break;
            case 0x88:
              FUN_00a58030(uVar7);
              puVar9 = puVar9 + 1;
              break;
            case 0x8a:
              FUN_00a58030(uVar7);
              puVar9 = puVar9 + 1;
              break;
            case 0x92:
              FUN_00a58030(uVar7);
              puVar9 = puVar9 + 1;
              break;
            case 0x93:
              FUN_00a58030(uVar7);
              puVar9 = puVar9 + 1;
              break;
            case 0x94:
              FUN_00a58030(uVar7);
              puVar9 = puVar9 + 1;
              break;
            case 0x95:
              FUN_00a58030(uVar7);
              puVar9 = puVar9 + 1;
              break;
            case 0x96:
              FUN_00a58030(uVar7);
              puVar9 = puVar9 + 1;
            }
          }
          else {
LAB_00a57100:
            puVar9 = puVar9 + 1;
          }
        }
        puVar9 = (undefined4 *)in_ECX[0x62];
        while( true ) {
          if ((puVar9 < (undefined4 *)in_ECX[0x62]) || ((undefined4 *)in_ECX[99] <= puVar9))
          goto LAB_00a5723c;
          cVar2 = FUN_00a57d40(*puVar9);
          if (cVar2 == '\0') break;
          puVar9 = puVar9 + 1;
        }
        iVar4 = (**(code **)(*piVar3 + 0x20))(local_50);
        puStack_10 = (undefined1 *)0x1;
        iVar5 = (**(code **)(*in_ECX + 0x18))();
        uVar6 = *(uint *)(iVar5 + 0x10);
        uVar1 = *(uint *)(iVar4 + 0x10);
        uVar8 = uVar1;
        if (uVar6 <= uVar1) {
          uVar8 = uVar6;
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
          uVar7 = (**(code **)(*piVar3 + 0x20))(auStack_34);
          puStack_10 = (undefined1 *)0x2;
          piVar3 = (int *)(**(code **)(*param_1 + 4))(uVar7);
          local_c = 0xffffffff;
          if (0xf < uStack_20) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b(auStack_34[0]);
          }
          uStack_20 = 0xf;
          uStack_24 = 0;
          auStack_34[0] = auStack_34[0] & 0xffffff00;
        }
LAB_00a5723c:
        puVar9 = (undefined4 *)in_ECX[0x62];
        while( true ) {
          if (puVar9 < (undefined4 *)in_ECX[0x62]) {
            ExceptionList = local_14;
            return;
          }
          if ((undefined4 *)in_ECX[99] <= puVar9) {
            ExceptionList = local_14;
            return;
          }
          cVar2 = FUN_00a57d40(*puVar9);
          if (cVar2 == '\0') break;
          puVar9 = puVar9 + 1;
        }
      } while( true );
    }
  }
  ExceptionList = local_14;
  return;
}

