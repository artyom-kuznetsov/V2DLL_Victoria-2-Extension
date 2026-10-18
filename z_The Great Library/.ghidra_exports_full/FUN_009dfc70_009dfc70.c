// FUN_009dfc70 @ 009dfc70 body=[[009dfc70, 009e06d8]]


LRESULT FUN_009dfc70(HWND param_1,uint param_2,uint param_3,uint param_4)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  undefined4 uVar5;
  DWORD dwStyle;
  int iVar6;
  LRESULT LVar7;
  uint *puVar8;
  undefined4 *unaff_ESI;
  undefined4 *puStack_1ac;
  tagRECT local_1a0;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined2 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined2 uStack_168;
  undefined4 local_158;
  undefined4 local_154;
  undefined4 local_150;
  undefined4 local_14c;
  uint local_148 [2];
  int local_140;
  ushort uStack_13e;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined2 uStack_130;
  uint auStack_120 [6];
  int iStack_108;
  ushort uStack_106;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined2 uStack_f8;
  uint auStack_e8 [6];
  int iStack_d0;
  ushort uStack_ce;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined2 uStack_c0;
  uint local_b0 [8];
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined2 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined2 uStack_6c;
  uint auStack_68 [4];
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined2 uStack_50;
  uint auStack_4c [4];
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined2 uStack_34;
  uint auStack_30 [4];
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined2 uStack_18;
  
  iVar6 = DAT_00f20c38;
  if (param_2 < 0x101) {
    if (param_2 == 0x100) {
      if ((*(undefined4 **)(DAT_00f20c38 + 0x80) != (undefined4 *)0x0) &&
         (cVar4 = (**(code **)(*(int *)**(undefined4 **)(DAT_00f20c38 + 0x80) + 0x34))(),
         cVar4 != '\0')) {
        FUN_00a46860();
        (**(code **)(**(int **)(iVar6 + 0xe8) + 0x10))(0x100,param_3,param_4);
        return 0;
      }
      cVar4 = FUN_009a6bd0();
      if ((cVar4 != '\0') ||
         (cVar4 = (**(code **)(**(int **)(iVar6 + 0xe8) + 0x30))(), cVar4 != '\0')) {
        auStack_e8[1] = 0x100;
        auStack_e8[0] = param_3;
        auStack_e8[2] = 1;
        auStack_e8[3] = 0;
        auStack_e8[4] = 0;
        auStack_e8[5] = 0;
        iStack_d0 = (uint)uStack_ce << 0x10;
        (**(code **)(**(int **)(iVar6 + 0x84) + 0x20))(auStack_e8);
        (**(code **)(**(int **)(iVar6 + 0xe8) + 0x10))(0x100,param_3,param_4);
      }
      return 0;
    }
    switch(param_2) {
    case 2:
      DAT_01258b2c = 1;
      PostQuitMessage(0);
      return 0;
    case 6:
      if (param_3 == 0) {
        *(undefined1 *)(DAT_00f20c38 + 0xf2) = 0;
      }
      else if ((param_3 != 0) && (param_3 < 3)) {
        *(undefined1 *)(DAT_00f20c38 + 0xf2) = 1;
        LVar7 = DefWindowProcA(param_1,param_2,param_3,param_4);
        return LVar7;
      }
      LVar7 = DefWindowProcA(param_1,param_2,param_3,param_4);
      return LVar7;
    case 0x1c:
    case 0x20:
      iVar6 = **(int **)(DAT_00f20c38 + 0xe4);
      uVar5 = (**(code **)(iVar6 + 0x14))();
      (**(code **)(iVar6 + 0x10))(uVar5);
      return 0;
    case 0x24:
      if (param_4 == 0) {
        LVar7 = DefWindowProcA(param_1,param_2,param_3,0);
        return LVar7;
      }
      iVar3 = *(int *)(DAT_00f20c38 + 0xec);
      local_1a0.left = *(int *)(iVar3 + 0x40);
      local_1a0.top = *(int *)(iVar3 + 0x44);
      SetRect(&local_1a0,0,0,*(int *)(iVar3 + 0x40),local_1a0.top);
      if (*(char *)(*(int *)(iVar6 + 0xec) + 0x4c) == '\0') {
        dwStyle = (int)&dwStyle_00cf0000 +
                  (-(uint)(*(char *)(*(int *)(iVar6 + 0xec) + 0x4d) != '\0') & 0x7f310000);
      }
      else {
        dwStyle = 0x90000000;
      }
      AdjustWindowRect(&local_1a0,dwStyle,0);
      iVar6 = (int)ABS((double)(local_1a0.right - local_1a0.left));
      if (iVar6 < 1) {
        return 0;
      }
      *(int *)(param_4 + 0x18) = iVar6;
      *(int *)(param_4 + 0x20) = iVar6;
      *(int *)(param_4 + 0x1c) = (int)ABS((double)(local_1a0.top - local_1a0.bottom));
      *(int *)(param_4 + 0x24) = (int)ABS((double)(local_1a0.top - local_1a0.bottom));
      return 0;
    case 0xa1:
switchD_009dfcb5_caseD_a1:
      if (param_3 == 2) {
        LVar7 = DefWindowProcA(param_1,param_2,2,param_4);
        return LVar7;
      }
      piVar2 = (int *)(DAT_00f20c38 + 0x80);
      puVar1 = (undefined4 *)*piVar2;
      if ((puVar1 != (undefined4 *)0x0) &&
         (cVar4 = (**(code **)(*(int *)*puVar1 + 0x34))(), cVar4 != '\0')) {
        (**(code **)(**(int **)*piVar2 + 0x24))(1);
        (**(code **)(**(int **)(iVar6 + 0xe4) + 0x1c))(param_2,param_3,param_4);
        return 0;
      }
      (**(code **)(**(int **)(iVar6 + 0xe4) + 0x1c))(param_2,param_3,param_4);
      uStack_190 = *(undefined4 *)(iVar6 + 0xe4);
      local_1a0.top = 0;
      local_1a0.right = 0;
      local_1a0.bottom = 0;
      uStack_18c = 3;
      uStack_188 = 1;
      uStack_184 = 0;
      (**(code **)(**(int **)(iVar6 + 0x84) + 0x20))(&local_1a0.top);
      return 0;
    case 0xa2:
switchD_009dfcb5_caseD_a2:
      piVar2 = (int *)(DAT_00f20c38 + 0x80);
      puVar1 = (undefined4 *)*piVar2;
      if ((puVar1 != (undefined4 *)0x0) &&
         (cVar4 = (**(code **)(*(int *)*puVar1 + 0x34))(), cVar4 != '\0')) {
        (**(code **)(**(int **)*piVar2 + 0x24))(0);
        (**(code **)(**(int **)(iVar6 + 0xe4) + 0x1c))(param_2,param_3,param_4);
        return 0;
      }
      (**(code **)(**(int **)(iVar6 + 0xe4) + 0x1c))(param_2,param_3,param_4);
      uStack_78 = *(undefined4 *)(iVar6 + 0xe4);
      uStack_84 = 0;
      uStack_80 = 0;
      uStack_7c = 0;
      uStack_74 = 4;
      uStack_70 = 1;
      uStack_6c = 0;
      (**(code **)(**(int **)(iVar6 + 0x84) + 0x20))(&uStack_84);
      return 0;
    case 0xa3:
switchD_009dfcb5_caseD_a3:
      (**(code **)(**(int **)(DAT_00f20c38 + 0xe4) + 0x1c))(param_2,param_3,param_4);
      auStack_30[3] = *unaff_ESI;
      auStack_30[0] = 0;
      auStack_30[1] = 0;
      auStack_30[2] = 0;
      uStack_20 = 5;
      uStack_1c = 1;
      uStack_18 = 0;
      puVar8 = auStack_30;
LAB_009e06a2:
      (**(code **)(**(int **)(iVar6 + 0x84) + 0x20))(puVar8);
      return 0;
    case 0xa4:
switchD_009dfcb5_caseD_a4:
      (**(code **)(**(int **)(DAT_00f20c38 + 0xe4) + 0x1c))(param_2,param_3,param_4);
      uStack_174 = *unaff_ESI;
      uStack_180 = 0;
      uStack_17c = 0;
      uStack_178 = 0;
      uStack_170 = 3;
      uStack_16c = 2;
      uStack_168 = 0;
      (**(code **)(**(int **)(iVar6 + 0x84) + 0x20))(&uStack_180);
      return 0;
    case 0xa5:
switchD_009dfcb5_caseD_a5:
      (**(code **)(**(int **)(DAT_00f20c38 + 0xe4) + 0x1c))(param_2,param_3,param_4);
      uStack_13c = *unaff_ESI;
      local_148[0] = 0;
      local_148[1] = 0;
      local_140 = 0;
      uStack_138 = 4;
      uStack_134 = 2;
      uStack_130 = 0;
      puVar8 = local_148;
      goto LAB_009e06a2;
    case 0xa6:
switchD_009dfcb5_caseD_a6:
      (**(code **)(**(int **)(DAT_00f20c38 + 0xe4) + 0x1c))(param_2,param_3,param_4);
      local_b0[7] = *unaff_ESI;
      local_b0[4] = 0;
      local_b0[5] = 0;
      local_b0[6] = 0;
      uStack_90 = 5;
      uStack_8c = 2;
      uStack_88 = 0;
      puVar8 = local_b0 + 4;
      goto LAB_009e06a2;
    case 0xa7:
switchD_009dfcb5_caseD_a7:
      (**(code **)(**(int **)(DAT_00f20c38 + 0xe4) + 0x1c))(param_2,param_3,param_4);
      uStack_104 = *unaff_ESI;
      auStack_120[4] = 0;
      auStack_120[5] = 0;
      iStack_108 = 0;
      uStack_100 = 3;
      uStack_fc = 3;
      uStack_f8 = 0;
      puVar8 = auStack_120 + 4;
      goto LAB_009e06a2;
    case 0xa8:
switchD_009dfcb5_caseD_a8:
      (**(code **)(**(int **)(DAT_00f20c38 + 0xe4) + 0x1c))(param_2,param_3,param_4);
      uStack_cc = *unaff_ESI;
      auStack_e8[4] = 0;
      auStack_e8[5] = 0;
      iStack_d0 = 0;
      uStack_c8 = 4;
      uStack_c4 = 3;
      uStack_c0 = 0;
      puVar8 = auStack_e8 + 4;
      goto LAB_009e06a2;
    case 0xa9:
switchD_009dfcb5_caseD_a9:
      (**(code **)(**(int **)(DAT_00f20c38 + 0xe4) + 0x1c))(param_2,param_3,param_4);
      auStack_68[3] = *unaff_ESI;
      auStack_68[0] = 0;
      auStack_68[1] = 0;
      auStack_68[2] = 0;
      uStack_58 = 5;
      uStack_54 = 3;
      uStack_50 = 0;
      puVar8 = auStack_68;
      goto LAB_009e06a2;
    }
  }
  else if (param_2 < 0x201) {
    if (param_2 == 0x200) {
      if (*(undefined4 **)(DAT_00f20c38 + 0x80) == (undefined4 *)0x0) {
        return 0;
      }
      cVar4 = (**(code **)(*(int *)**(undefined4 **)(DAT_00f20c38 + 0x80) + 0x34))();
      if (cVar4 == '\0') {
        return 0;
      }
      (**(code **)(*(int *)**(undefined4 **)(iVar6 + 0x80) + 0x20))
                ((int)(short)param_4,(int)(short)(param_4 >> 0x10));
      return 0;
    }
    if (param_2 == 0x102) {
      puVar1 = (undefined4 *)(DAT_00f20c38 + 0xe8);
      cVar4 = (**(code **)(**(int **)(DAT_00f20c38 + 0xe8) + 0x30))();
      if (cVar4 == '\0') {
        if ((*(undefined4 **)(iVar6 + 0x80) != (undefined4 *)0x0) &&
           (cVar4 = (**(code **)(*(int *)**(undefined4 **)(iVar6 + 0x80) + 0x34))(), cVar4 != '\0'))
        {
          if (0xd < (ushort)param_3) {
            (**(code **)(*(int *)**(undefined4 **)(iVar6 + 0x80) + 0x28))(param_3);
          }
          (**(code **)(*(int *)*puVar1 + 0x10))(0x102,param_3,param_4);
          return 0;
        }
        local_1a0.left = param_3;
        local_1a0.top = 0x102;
        cVar4 = FUN_009a6bd0();
        if (cVar4 == '\0') {
          auStack_120[1] = 0x102;
          auStack_120[0] = param_3;
          auStack_120[2] = 1;
          auStack_120[3] = 0;
          auStack_120[4] = 0;
          auStack_120[5] = 0;
          iStack_108 = (uint)uStack_106 << 0x10;
          (**(code **)(**(int **)(iVar6 + 0x84) + 0x20))(auStack_120);
          (**(code **)(*(int *)*puStack_1ac + 0x10))(0x102,param_3,param_4);
        }
      }
      return 0;
    }
    if (param_2 == 0x104) {
      if (param_3 != 0xd) {
        if (param_3 != 0x79) goto LAB_009e06c0;
        cVar4 = FUN_009a6bd0();
        if ((cVar4 != '\0') ||
           (cVar4 = (**(code **)(**(int **)(iVar6 + 0xe8) + 0x30))(), cVar4 != '\0')) {
          local_158 = 0x79;
          local_154 = 0x104;
          local_150 = 1;
          local_14c = 0;
          local_148[0] = 0;
          local_148[1] = 0;
          local_140 = (uint)uStack_13e << 0x10;
          (**(code **)(**(int **)(iVar6 + 0x84) + 0x20))(&local_158);
          (**(code **)(**(int **)(iVar6 + 0xe8) + 0x10))(0x104,0x79,param_4);
          return 0;
        }
      }
      if ((param_4 & 0x20000000) != 0) {
        local_b0[0] = param_3;
        local_b0[1] = 0x104;
        local_b0[2] = 1;
        local_b0[3] = 0;
        local_b0[4] = 0;
        local_b0[5] = 0;
        local_b0[6] = local_b0[6] & 0xffff0000;
        (**(code **)(**(int **)(iVar6 + 0x84) + 0x20))(local_b0);
        (**(code **)(**(int **)(iVar6 + 0xe8) + 0x10))(0x104,param_3,param_4);
        return 0;
      }
      goto LAB_009e06c0;
    }
  }
  else {
    switch(param_2) {
    case 0x201:
      goto switchD_009dfcb5_caseD_a1;
    case 0x202:
      goto switchD_009dfcb5_caseD_a2;
    case 0x203:
      goto switchD_009dfcb5_caseD_a3;
    case 0x204:
      goto switchD_009dfcb5_caseD_a4;
    case 0x205:
      goto switchD_009dfcb5_caseD_a5;
    case 0x206:
      goto switchD_009dfcb5_caseD_a6;
    case 0x207:
      goto switchD_009dfcb5_caseD_a7;
    case 0x208:
      goto switchD_009dfcb5_caseD_a8;
    case 0x209:
      goto switchD_009dfcb5_caseD_a9;
    case 0x20a:
      (**(code **)(**(int **)(DAT_00f20c38 + 0xe4) + 0x1c))(param_2,param_3,param_4);
      auStack_4c[3] = *unaff_ESI;
      auStack_4c[0] = 0;
      auStack_4c[1] = 0;
      auStack_4c[2] = 0;
      uStack_3c = 3;
      uStack_38 = 4;
      uStack_34 = 0;
      puVar8 = auStack_4c;
      goto LAB_009e06a2;
    }
  }
LAB_009e06c0:
  LVar7 = DefWindowProcA(param_1,param_2,param_3,param_4);
  return LVar7;
}

