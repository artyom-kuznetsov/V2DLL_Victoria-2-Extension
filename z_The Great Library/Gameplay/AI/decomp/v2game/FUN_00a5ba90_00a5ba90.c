// FUN_00a5ba90 @ 00a5ba90 body=[[00a5ba90, 00a5bb30] [00a5bb34, 00a5bb4c] [00a5bb50, 00a5bb57] [00a5bb60, 00a5bc68] [00a5bc70, 00a5bd38] [00a5bd3c, 00a5bd7f] [00a5bd83, 00a5bdeb]]


/* WARNING: Removing unreachable block (ram,0x00a5bcd4) */

void FUN_00a5ba90(int *param_1)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  int *in_ECX;
  undefined4 *puVar8;
  bool bVar9;
  int *piStack_5c;
  uint local_50 [4];
  undefined4 local_40;
  uint local_3c;
  uint auStack_34 [4];
  undefined4 uStack_24;
  uint uStack_20;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b4f0d8;
  pvStack_14 = ExceptionList;
  ExceptionList = &pvStack_14;
  if (in_ECX[0x3e] != 0) {
    ExceptionList = &pvStack_14;
    FUN_009a4b40(in_ECX[0x3e],&LAB_00640b30,in_ECX + 0x3d);
  }
  cVar2 = FUN_00a5bfe0();
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
      piStack_5c = (int *)(**(code **)(*param_1 + 4))(in_ECX + 0x1a);
      do {
        puVar8 = (undefined4 *)in_ECX[0x46];
        while (((undefined4 *)in_ECX[0x46] <= puVar8 && (puVar8 < (undefined4 *)in_ECX[0x47]))) {
          cVar2 = FUN_00a5c020(*puVar8);
          if (cVar2 == '\0') {
            uVar7 = *puVar8;
            switch(uVar7) {
            case 0x2e:
              FUN_00a5c2a0(uVar7);
              puVar8 = puVar8 + 1;
              break;
            default:
              FUN_00a5c2a0(uVar7);
              goto LAB_00a5bc59;
            case 0x4b:
              FUN_00a5c2a0(uVar7);
              puVar8 = puVar8 + 1;
              break;
            case 0x84:
              FUN_00a5c2a0(uVar7);
              puVar8 = puVar8 + 1;
              break;
            case 0x8a:
              FUN_00a5c2a0(uVar7);
              puVar8 = puVar8 + 1;
              break;
            case 0x99:
              FUN_00a5c2a0(uVar7);
              puVar8 = puVar8 + 1;
              break;
            case 0xb4:
              FUN_00a5c2a0(uVar7);
              puVar8 = puVar8 + 1;
              break;
            case 0xb5:
              FUN_00a5c2a0(uVar7);
              puVar8 = puVar8 + 1;
            }
          }
          else {
LAB_00a5bc59:
            puVar8 = puVar8 + 1;
          }
        }
        puVar8 = (undefined4 *)in_ECX[0x46];
        while( true ) {
          if ((puVar8 < (undefined4 *)in_ECX[0x46]) || ((undefined4 *)in_ECX[0x47] <= puVar8))
          goto LAB_00a5bd98;
          cVar2 = FUN_00a5c020(*puVar8);
          if (cVar2 == '\0') break;
          puVar8 = puVar8 + 1;
        }
        iVar3 = (**(code **)(*piStack_5c + 0x20))(local_50);
        puStack_10 = (undefined1 *)0x1;
        iVar4 = (**(code **)(*in_ECX + 0x18))();
        uVar6 = *(uint *)(iVar4 + 0x10);
        uVar1 = *(uint *)(iVar3 + 0x10);
        uVar5 = uVar1;
        if (uVar6 <= uVar1) {
          uVar5 = uVar6;
        }
        iVar3 = FUN_00414bd0(uVar5);
        bVar9 = false;
        if (iVar3 == 0) {
          if (uVar1 < uVar6) {
            uVar6 = 0xffffffff;
          }
          else {
            uVar6 = (uint)(uVar1 != uVar6);
          }
          bVar9 = uVar6 == 0;
        }
        local_c = 0xffffffff;
        if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_50[0]);
        }
        if (!bVar9) {
          uVar7 = (**(code **)(*piStack_5c + 0x20))(auStack_34);
          puStack_10 = (undefined1 *)0x2;
          piStack_5c = (int *)(**(code **)(*param_1 + 4))(uVar7);
          local_c = 0xffffffff;
          if (0xf < uStack_20) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b(auStack_34[0]);
          }
          uStack_20 = 0xf;
          uStack_24 = 0;
          auStack_34[0] = auStack_34[0] & 0xffffff00;
        }
LAB_00a5bd98:
        puVar8 = (undefined4 *)in_ECX[0x46];
        while( true ) {
          if ((puVar8 < (undefined4 *)in_ECX[0x46]) || ((undefined4 *)in_ECX[0x47] <= puVar8))
          goto LAB_00a5bdc7;
          cVar2 = FUN_00a5c020(*puVar8);
          if (cVar2 == '\0') break;
          puVar8 = puVar8 + 1;
        }
      } while( true );
    }
  }
LAB_00a5bdc7:
  iVar3 = FUN_00a581e0();
  in_ECX[0x52] = iVar3;
  ExceptionList = pvStack_14;
  return;
}

