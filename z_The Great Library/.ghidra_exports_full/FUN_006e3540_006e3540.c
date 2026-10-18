// FUN_006e3540 @ 006e3540 body=[[006e3540, 006e3646] [006e364a, 006e372f] [006e3733, 006e3789] [006e3790, 006e3819] [006e3820, 006e3b75] [006e3b79, 006e3c23] [006e3c27, 006e3cd6] [006e3cda, 006e3d25] [006e3d29, 006e3d74] [006e3d78, 006e3e2d] [006e3e31, 006e3f4c] [006e3f50, 006e3faa] [006e3fae, 006e4029] [006e402d, 006e4078] [006e407c, 006e40ea] [006e40ee, 006e4139] [006e413d, 006e41ad]]


/* WARNING: Removing unreachable block (ram,0x006e3681) */
/* WARNING: Removing unreachable block (ram,0x006e38d5) */

void FUN_006e3540(int *param_1,char param_2,char param_3,char param_4)

{
  undefined4 *puVar1;
  int *piVar2;
  char cVar3;
  char *pcVar4;
  int *piVar5;
  code *pcVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  undefined8 uVar10;
  longlong lVar11;
  char cStack0000000b;
  char local_78 [4];
  uint local_74 [4];
  undefined4 local_64;
  uint local_60;
  uint local_58 [4];
  undefined4 local_48;
  uint local_44;
  undefined4 local_3c;
  undefined4 local_38;
  undefined8 local_34;
  undefined4 local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  piVar2 = param_1;
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b7df18;
  local_10 = ExceptionList;
  iVar9 = param_1[1];
  if (iVar9 == 0) {
    ExceptionList = &local_10;
    FUN_00409350();
    FUN_00409350();
    (**(code **)(*(int *)(*param_1 + 0x18) + 0x38))();
    ExceptionList = local_10;
    return;
  }
  local_3c = *(undefined4 *)(DAT_012588e8 + 0xb5c);
  local_20 = *(int *)(iVar9 + 0x1c);
  local_1c = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(DAT_012588e8 + 0xb60) * 4);
  local_18 = 0;
  for (iVar7 = *(int *)(local_20 + 0x60); iVar7 != 0; iVar7 = *(int *)(iVar7 + 0x224)) {
    if (iVar9 == iVar7) {
      if (iVar7 != 0) goto LAB_006e35bf;
      break;
    }
    local_18 = local_18 + 1;
  }
  local_18 = -1;
LAB_006e35bf:
  local_44 = 0xf;
  local_48 = 0;
  local_58[0] = local_58[0] & 0xffffff00;
  local_8 = 0;
  ExceptionList = &local_10;
  pcVar4 = __itoa(*(int *)(iVar9 + 0x20),local_78,10);
  do {
    cVar3 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar3 != '\0');
  FUN_00409350();
  local_8 = 1;
  FUN_00408ed0();
  FUN_00a5ecc0();
  local_8 = 0xffffffff;
  if (0xf < local_44) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  FUN_004f5910();
  local_2c = __alldiv();
  (**(code **)(*(int *)param_1[3] + 0x48))();
  FUN_009c8700(local_74);
  local_8 = 2;
  FUN_00408ed0();
  FUN_00a5ecc0();
  local_8 = 0xffffffff;
  if (0xf < local_60) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  FUN_0047dbb0();
  local_14 = *(int **)(param_1[1] + 0x1d0);
  local_24 = *(int *)(*(int *)(param_1[1] + 0x18) + 300);
  iVar9 = 0;
  param_1 = (int *)0x0;
  if (local_14 == (int *)0x0) {
    iVar9 = 0;
    local_28 = *(int *)(DAT_012587f0 + 0x10) - *(int *)(DAT_012587f0 + 0xc) >> 2;
    if (0 < local_28) {
      local_14 = piVar2 + 9;
      do {
        uVar8 = (uint)*(byte *)(local_24 + 0x2c + iVar9);
        iVar7 = *(int *)(*(int *)(local_24 + 0x6c) + 4 + uVar8 * 8);
        if ((-1 < iVar7) && ((0 < iVar7 || (*(int *)(*(int *)(local_24 + 0x6c) + uVar8 * 8) != 0))))
        {
          (**(code **)(*(int *)local_14[-4] + 0x48))();
          uVar10 = FUN_00b31c36();
          iVar7 = piVar2[1];
          puVar1 = (undefined4 *)(*(int *)(iVar7 + 200) + (uint)*(byte *)(iVar7 + 0x88 + iVar9) * 8)
          ;
          local_38 = puVar1[1];
          local_34 = uVar10;
          lVar11 = __allmul(*puVar1,local_38);
          lVar11 = __allmul(lVar11 >> 0xf);
          piVar5 = local_14;
          if (*(longlong *)(*(int *)(iVar7 + 0x70) + (uint)*(byte *)(iVar7 + 0x30 + iVar9) * 8) <
              lVar11 >> 0xf) {
            (**(code **)(*(int *)*local_14 + 0x108))();
            pcVar6 = *(code **)(*(int *)*piVar5 + 0x34);
          }
          else {
            pcVar6 = *(code **)(*(int *)*local_14 + 0x104);
          }
          (*pcVar6)();
          param_1 = (int *)((int)param_1 + 1);
          local_14 = piVar5 + 1;
          if (param_1 == (int *)0x4) break;
        }
        iVar9 = iVar9 + 1;
      } while (iVar9 < local_28);
    }
  }
  else {
    local_28 = *(int *)(DAT_012587f0 + 0x10) - *(int *)(DAT_012587f0 + 0xc) >> 2;
    local_34 = CONCAT44(local_34._4_4_,(undefined4)local_34);
    if (0 < local_28) {
      piVar5 = piVar2 + 9;
      do {
        uVar8 = (uint)*(byte *)((int)local_14 + iVar9 + 0x68);
        iVar7 = *(int *)(local_14[0x2a] + 4 + uVar8 * 8);
        if ((-1 < iVar7) && ((0 < iVar7 || (*(int *)(local_14[0x2a] + uVar8 * 8) != 0)))) {
          (**(code **)(*(int *)piVar5[-4] + 0x48))();
          (**(code **)(*(int *)*piVar5 + 0x104))();
          param_1 = (int *)((int)param_1 + 1);
          piVar5 = piVar5 + 1;
          if (param_1 == (int *)0x4) break;
        }
        iVar9 = iVar9 + 1;
      } while (iVar9 < local_28);
    }
  }
  if ((int)param_1 < 4) {
    piVar5 = piVar2 + (int)param_1 + 9;
    iVar9 = 4 - (int)param_1;
    do {
      (**(code **)(*(int *)piVar5[-4] + 0x48))();
      (**(code **)(*(int *)*piVar5 + 0x104))();
      piVar5 = piVar5 + 1;
      iVar9 = iVar9 + -1;
    } while (iVar9 != 0);
  }
  (**(code **)(*(int *)piVar2[0xd] + 0x48))();
  (**(code **)(*(int *)piVar2[0xe] + 0x48))();
  if (param_2 == '\0') {
    pcVar6 = *(code **)(*(int *)piVar2[0x12] + 0xbc);
  }
  else {
    pcVar6 = *(code **)(*(int *)piVar2[0x12] + 0xb8);
  }
  (*pcVar6)();
  (**(code **)(*(int *)piVar2[0x12] + 0x48))();
  iVar7 = local_1c;
  iVar9 = local_20;
  cVar3 = FUN_0052d150();
  if (cVar3 == '\0') {
    pcVar6 = *(code **)(*(int *)piVar2[0x13] + 0xbc);
  }
  else {
    pcVar6 = *(code **)(*(int *)piVar2[0x13] + 0xb8);
  }
  (*pcVar6)();
  if (((*(int *)(iVar9 + 0x5c) != *(int *)(iVar7 + 0x20)) || (*(char *)(iVar7 + 0xae0) == '\0')) ||
     (cStack0000000b = '\x01', *(int *)(iVar9 + 0x68) <= local_18)) {
    cStack0000000b = '\0';
  }
  iVar9 = piVar2[1];
  if (((*(int *)(iVar9 + 0x20) < 1) || (10 < *(int *)(iVar9 + 0x184))) ||
     (*(char *)(iVar9 + 0x188) != '\0')) {
    cVar3 = FUN_0052dcd0(iVar7);
    if (cVar3 == '\0') {
      pcVar6 = *(code **)(*(int *)piVar2[0x10] + 0xbc);
    }
    else {
      pcVar6 = *(code **)(*(int *)piVar2[0x10] + 0xb8);
    }
    (*pcVar6)();
    (**(code **)(*(int *)piVar2[0x10] + 0x48))(1);
    iVar9 = *(int *)piVar2[0x14];
    if (cStack0000000b != '\0') {
      pcVar6 = *(code **)(iVar9 + 0xb8);
      goto LAB_006e3abb;
    }
  }
  else {
    (**(code **)(*(int *)piVar2[0x10] + 0x48))(2);
    iVar9 = *(int *)piVar2[0x10];
    if (param_3 != '\0') {
      pcVar6 = *(code **)(iVar9 + 0xb8);
      goto LAB_006e3abb;
    }
  }
  pcVar6 = *(code **)(iVar9 + 0xbc);
LAB_006e3abb:
  (*pcVar6)();
  if (param_4 == '\0') {
    pcVar6 = *(code **)(*(int *)piVar2[0x11] + 0xbc);
  }
  else {
    pcVar6 = *(code **)(*(int *)piVar2[0x11] + 0xb8);
  }
  (*pcVar6)();
  (**(code **)(*(int *)piVar2[0x11] + 0x48))((*(char *)(piVar2[1] + 0x180) != '\0') + '\x01');
  (**(code **)(*(int *)(*piVar2 + 0x18) + 0x34))();
  if ((*(int *)(piVar2[1] + 0x20) != 0) || (*(int *)(piVar2[1] + 0x17c) == 0)) {
    local_60 = 0xf;
    local_64 = 0;
    local_74[0] = local_74[0] & 0xffffff00;
    FUN_00409350("prod_cancel_progress",0x14);
    local_8 = 8;
    piVar5 = (int *)(**(code **)(*(int *)*piVar2 + 0x34))(local_74);
    (**(code **)(*piVar5 + 0x38))();
    local_8 = 0xffffffff;
    if (0xf < local_60) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_74[0]);
    }
    (**(code **)(*(int *)piVar2[0xf] + 0x38))();
    (**(code **)(*(int *)piVar2[0x16] + 0x38))();
    (**(code **)(*(int *)piVar2[2] + 0x34))();
    (**(code **)(*(int *)piVar2[3] + 0x34))();
    (**(code **)(*(int *)piVar2[4] + 0x34))();
    (**(code **)(*(int *)piVar2[0xe] + 0x34))();
    (**(code **)(*(int *)piVar2[0x10] + 0x34))();
    (**(code **)(*(int *)piVar2[0x11] + 0x34))();
    (**(code **)(*(int *)piVar2[0x12] + 0x34))();
    (**(code **)(*(int *)piVar2[0x13] + 0x34))();
    (**(code **)(*(int *)piVar2[0x15] + 0x34))();
    if (*(int *)(piVar2[1] + 0x17c) == 0) {
      (**(code **)(*(int *)piVar2[0x15] + 0x38))();
      local_60 = 0xf;
      local_64 = 0;
      local_74[0] = local_74[0] & 0xffffff00;
      FUN_00409350("progress_overlay_16_64",0x16);
      local_8 = 10;
      piVar5 = (int *)(**(code **)(*(int *)*piVar2 + 0x44))(local_74);
      (**(code **)(*piVar5 + 0x38))();
      local_8 = 0xffffffff;
      if (0xf < local_60) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_74[0]);
      }
      pcVar6 = *(code **)(*(int *)piVar2[0x13] + 0x34);
    }
    else {
      (**(code **)(*(int *)piVar2[0x15] + 0x34))();
      iVar9 = (*(int *)(*(int *)(piVar2[1] + 0x18) + 0xb8) * 1000) / 1000;
      (**(code **)(**(int **)(piVar2[0x15] + 0x94) + 0x60))
                (((iVar9 - *(int *)(piVar2[1] + 0x17c)) * 100) / iVar9);
      local_60 = 0xf;
      local_64 = 0;
      local_74[0] = local_74[0] & 0xffffff00;
      FUN_00409350("progress_overlay_16_64",0x16);
      local_8 = 9;
      piVar5 = (int *)(**(code **)(*(int *)*piVar2 + 0x44))(local_74);
      (**(code **)(*piVar5 + 0x34))();
      local_8 = 0xffffffff;
      if (0xf < local_60) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_74[0]);
      }
      pcVar6 = *(code **)(*(int *)piVar2[0x13] + 0x38);
    }
    local_8 = 0xffffffff;
    (*pcVar6)();
    iVar9 = piVar2[1];
    if (((*(int *)(iVar9 + 0x20) < 1) || (10 < *(int *)(iVar9 + 0x184))) ||
       (*(char *)(iVar9 + 0x188) != '\0')) {
      local_60 = 0xf;
      local_64 = 0;
      local_74[0] = (uint)local_74[0]._1_3_ << 8;
      FUN_00409350("closed_overlay",0xe);
      local_8 = 0xd;
      piVar5 = (int *)(**(code **)(*(int *)*piVar2 + 0x44))(local_74);
      (**(code **)(*piVar5 + 0x34))();
      local_8 = 0xffffffff;
      if (0xf < local_60) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_74[0]);
      }
      local_44 = 0xf;
      local_48 = 0;
      local_58[0] = local_58[0] & 0xffffff00;
      FUN_00409350("factory_closed_text",0x13);
      local_8 = 0xe;
      piVar5 = (int *)(**(code **)(*(int *)*piVar2 + 0x3c))(local_58);
      (**(code **)(*piVar5 + 0x34))();
      local_8 = 0xffffffff;
      if (local_44 < 0x10) {
        local_44 = 0xf;
        local_48 = 0;
        local_58[0] = local_58[0] & 0xffffff00;
        (**(code **)(*(int *)piVar2[0x14] + 0x34))();
        FUN_006e4990(piVar2);
        ExceptionList = local_10;
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_58[0]);
    }
    local_60 = 0xf;
    local_64 = 0;
    local_74[0] = (uint)local_74[0]._1_3_ << 8;
    FUN_00409350("closed_overlay",0xe);
    local_8 = 0xb;
    piVar5 = (int *)(**(code **)(*(int *)*piVar2 + 0x44))(local_74);
    (**(code **)(*piVar5 + 0x38))();
    local_8 = 0xffffffff;
    if (0xf < local_60) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_74[0]);
    }
    local_60 = 0xf;
    local_64 = 0;
    local_74[0] = local_74[0] & 0xffffff00;
    FUN_00409350("factory_closed_text",0x13);
    local_8 = 0xc;
    piVar5 = (int *)(**(code **)(*(int *)*piVar2 + 0x3c))(local_74);
    (**(code **)(*piVar5 + 0x38))();
    local_8 = 0xffffffff;
    if (local_60 < 0x10) {
      (**(code **)(*(int *)piVar2[0x14] + 0x38))();
      FUN_006e4990(piVar2);
      ExceptionList = local_10;
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_74[0]);
  }
  (**(code **)(*(int *)piVar2[0xf] + 0x34))();
  local_60 = 0xf;
  local_64 = 0;
  local_74[0] = local_74[0] & 0xffffff00;
  FUN_00409350("prod_cancel_progress",0x14);
  local_8 = 3;
  piVar5 = (int *)(**(code **)(*(int *)*piVar2 + 0x34))(local_74);
  (**(code **)(*piVar5 + 0x34))();
  local_8 = 0xffffffff;
  if (0xf < local_60) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_74[0]);
  }
  local_60 = 0xf;
  local_64 = 0;
  local_74[0] = local_74[0] & 0xffffff00;
  FUN_00409350("prod_cancel_progress",0x14);
  local_8 = 4;
  iVar9 = *(int *)(local_20 + 0x60);
  iVar7 = 0;
  do {
    if (iVar9 == 0) {
LAB_006e3bbd:
      iVar7 = -1;
LAB_006e3bc0:
      if (((*(int *)(local_20 + 0x5c) != *(int *)(local_1c + 0x20)) ||
          (*(char *)(local_1c + 0xae0) == '\0')) ||
         (cStack0000000b = '\x01', *(int *)(local_20 + 0x68) <= iVar7)) {
        cStack0000000b = '\0';
      }
      piVar5 = (int *)(**(code **)(*(int *)*piVar2 + 0x34))(local_74);
      if (cStack0000000b == '\0') {
        pcVar6 = *(code **)(*piVar5 + 0xbc);
      }
      else {
        pcVar6 = *(code **)(*piVar5 + 0xb8);
      }
      (*pcVar6)();
      local_8 = 0xffffffff;
      if (0xf < local_60) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_74[0]);
      }
      (**(code **)(*(int *)piVar2[2] + 0x38))();
      (**(code **)(*(int *)piVar2[3] + 0x38))();
      (**(code **)(*(int *)piVar2[4] + 0x38))();
      (**(code **)(*(int *)piVar2[0xe] + 0x38))();
      (**(code **)(*(int *)piVar2[0x10] + 0x38))();
      (**(code **)(*(int *)piVar2[0x14] + 0x38))();
      (**(code **)(*(int *)piVar2[0x11] + 0x38))();
      (**(code **)(*(int *)piVar2[0x12] + 0x38))();
      (**(code **)(*(int *)piVar2[0x13] + 0x38))();
      (**(code **)(*(int *)piVar2[0x15] + 0x38))();
      local_60 = 0xf;
      local_64 = 0;
      local_74[0] = local_74[0] & 0xffffff00;
      FUN_00409350("progress_overlay_16_64",0x16);
      local_8 = 5;
      piVar5 = (int *)(**(code **)(*(int *)*piVar2 + 0x44))(local_74);
      (**(code **)(*piVar5 + 0x38))();
      local_8 = 0xffffffff;
      if (0xf < local_60) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_74[0]);
      }
      local_60 = 0xf;
      local_64 = 0;
      local_74[0] = local_74[0] & 0xffffff00;
      FUN_00409350("closed_overlay",0xe);
      local_8 = 6;
      piVar5 = (int *)(**(code **)(*(int *)*piVar2 + 0x44))(local_74);
      (**(code **)(*piVar5 + 0x38))();
      local_8 = 0xffffffff;
      if (local_60 < 0x10) {
        local_60 = 0xf;
        local_64 = 0;
        local_74[0] = local_74[0] & 0xffffff00;
        FUN_00409350("factory_closed_text",0x13);
        local_8 = 7;
        piVar5 = (int *)(**(code **)(*(int *)*piVar2 + 0x3c))(local_74);
        (**(code **)(*piVar5 + 0x38))();
        local_8 = 0xffffffff;
        if (local_60 < 0x10) {
          (**(code **)(*(int *)piVar2[0x16] + 0x34))();
          iVar9 = (*(int *)(*(int *)(piVar2[1] + 0x18) + 0xb8) * 1000) / 1000;
          (**(code **)(**(int **)(piVar2[0x16] + 0x94) + 0x60))
                    (((iVar9 - *(int *)(piVar2[1] + 0x17c)) * 100) / iVar9);
          FUN_006e4990(piVar2);
          ExceptionList = local_10;
          return;
        }
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_74[0]);
      }
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_74[0]);
    }
    if (piVar2[1] == iVar9) {
      if (iVar9 != 0) goto LAB_006e3bc0;
      goto LAB_006e3bbd;
    }
    iVar9 = *(int *)(iVar9 + 0x224);
    iVar7 = iVar7 + 1;
  } while( true );
}

