// FUN_009452a0 @ 009452a0 body=[[009452a0, 0094531b] [0094531f, 00945397] [0094539b, 00945438] [00945440, 0094568c] [00945690, 009456bb]]


void FUN_009452a0(void)

{
  int iVar1;
  char cVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  undefined4 uVar6;
  int in_ECX;
  int *piStack_154;
  undefined4 uStack_148;
  undefined1 local_144 [12];
  undefined4 uStack_138;
  uint local_134;
  uint local_130 [3];
  undefined4 uStack_124;
  uint uStack_120;
  undefined4 uStack_11c;
  uint uStack_114;
  undefined1 auStack_110 [12];
  undefined4 uStack_104;
  uint uStack_100;
  undefined4 uStack_fc;
  undefined **ppuStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined1 uStack_c0;
  undefined4 uStack_bc;
  int iStack_b4;
  undefined1 auStack_b0 [24];
  undefined4 uStack_98;
  undefined1 *puStack_8c;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined1 auStack_68 [8];
  undefined4 uStack_60;
  undefined4 uStack_5c;
  void *pvStack_20;
  undefined4 uStack_18;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00ba2d8f;
  pvStack_14 = ExceptionList;
  local_130[0] = 0xf;
  local_134 = 0;
  local_144[0] = 0;
  ExceptionList = &pvStack_14;
  FUN_00409350("wargoal_state_select",0x14);
  local_c = 0;
  piVar3 = (int *)(**(code **)(**(int **)(in_ECX + 4) + 0x6c))(local_144);
  puStack_10 = (undefined1 *)0xffffffff;
  if (0xf < local_134) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(uStack_148);
  }
  local_134 = 0xf;
  uStack_138 = 0;
  (**(code **)(piVar3[6] + 0x38))();
  uStack_fc = 0xf;
  uStack_100 = 0;
  auStack_110[0] = 0;
  FUN_00409350("state_list",10);
  puStack_10 = (undefined1 *)0x1;
  piVar3 = (int *)(**(code **)(*piVar3 + 0x7c))(auStack_110);
  pvStack_14 = (void *)0xffffffff;
  if (uStack_100 < 0x10) {
    uStack_100 = 0xf;
    uStack_104 = 0;
    uStack_114 = uStack_114 & 0xffffff00;
    (**(code **)(*piVar3 + 0x5c))();
    FUN_008a8650(0);
    FUN_008a8650(0);
    uStack_60 = *(undefined4 *)(in_ECX + 0x9c);
    uStack_5c = *(undefined4 *)(in_ECX + 0xa0);
    puStack_8c = auStack_68;
    uStack_84 = *(undefined4 *)(*(int *)(in_ECX + 0x6c) + 0x38);
    uStack_80 = *(undefined4 *)(*(int *)(in_ECX + 0x6c) + 0x3c);
    piVar4 = *(int **)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(in_ECX + 0xa8) * 4) + 0xe44);
    if (piVar4 != (int *)0x0) {
      do {
        iVar1 = *piVar4;
        piVar4 = (int *)piVar4[2];
        if (iVar1 == 0) {
          uStack_98 = 0;
        }
        else if ((*(int *)(iVar1 + 0x4c) - *(int *)(iVar1 + 0x48) & 0xfffffffcU) == 0) {
          uStack_98 = 0;
        }
        else {
          uStack_98 = **(undefined4 **)(iVar1 + 0x48);
        }
        cVar2 = (**(code **)(*(int *)(*(int *)(*(int *)(in_ECX + 0x6c) + 0x34) + 0xa0) + 0x18))
                          (auStack_b0);
        if ((cVar2 != '\0') &&
           ((iVar5 = (**(code **)(**(int **)(in_ECX + 0x6c) + 0x20))(), iVar5 != 0x9fa ||
            (cVar2 = (**(code **)(*(int *)(*(int *)(*(int *)(in_ECX + 0x6c) + 0x34) + 0x84) + 0x18))
                               (auStack_b0), cVar2 != '\0')))) {
          iVar5 = *(int *)(in_ECX + 0x6c);
          uStack_f0 = *(undefined4 *)(iVar5 + 0x30);
          uStack_ec = *(undefined4 *)(iVar5 + 0x34);
          uStack_e8 = *(undefined4 *)(iVar5 + 0x38);
          uStack_e4 = *(undefined4 *)(iVar5 + 0x3c);
          uStack_e0 = *(undefined4 *)(iVar5 + 0x40);
          uStack_dc = *(undefined4 *)(iVar5 + 0x44);
          uStack_d8 = *(undefined4 *)(iVar5 + 0x48);
          uStack_d4 = *(undefined4 *)(iVar5 + 0x4c);
          uStack_cc = *(undefined4 *)(iVar5 + 0x54);
          uStack_c8 = *(undefined4 *)(iVar5 + 0x58);
          uStack_c4 = *(undefined4 *)(iVar5 + 0x5c);
          uStack_c0 = *(undefined1 *)(iVar5 + 0x60);
          uStack_bc = *(undefined4 *)(iVar5 + 100);
          uStack_f4 = 0x18d;
          ppuStack_f8 = CWarGoal::vftable;
          if (iVar1 == 0) {
            uStack_d0 = 0;
          }
          else if ((*(int *)(iVar1 + 0x4c) - *(int *)(iVar1 + 0x48) & 0xfffffffcU) == 0) {
            uStack_d0 = 0;
          }
          else {
            uStack_d0 = **(undefined4 **)(iVar1 + 0x48);
          }
          iVar5 = (**(code **)(**(int **)(in_ECX + 0x6c) + 0x20))();
          cVar2 = FUN_00952230(&ppuStack_f8,iVar5 == 0x9fa);
          if (cVar2 != '\0') {
            iStack_b4 = FUN_00aae9af(0x88);
            pvStack_14 = (void *)0x2;
            if (iStack_b4 == 0) {
              uVar6 = 0;
            }
            else {
              uVar6 = FUN_0093f2b0(iStack_b4,iVar1,in_ECX,0x2d2d2d,0);
            }
            pvStack_14 = (void *)0xffffffff;
            (**(code **)(*piVar3 + 0x10))(uVar6,1);
          }
        }
      } while (piVar4 != (int *)0x0);
      piStack_154 = (int *)0x0;
    }
    uStack_11c = 0xf;
    uStack_120 = 0;
    local_130[0] = local_130[0] & 0xffffff00;
    FUN_00409350("message_dialog",0xe);
    pvStack_14 = (void *)0x3;
    (**(code **)(piVar3[1] + 0x78))(local_130);
    uStack_18 = 0xffffffff;
    if (uStack_120 < 0x10) {
      uStack_120 = 0xf;
      uStack_124 = 0;
      local_134 = local_134 & 0xffffff00;
      (**(code **)(*piStack_154 + 0x34))();
      ExceptionList = pvStack_20;
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_134);
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(uStack_114);
}

