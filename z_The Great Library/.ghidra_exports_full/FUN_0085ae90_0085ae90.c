// FUN_0085ae90 @ 0085ae90 body=[[0085ae90, 0085b41a]]


void FUN_0085ae90(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int in_ECX;
  int aiStack_4c [3];
  undefined4 uStack_40;
  int iStack_3c;
  undefined4 *puStack_38;
  int **ppiStack_34;
  undefined4 local_20;
  int *local_1c;
  void *pvStack_18;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b5856b;
  local_14 = ExceptionList;
  if (param_2 < 0x721) {
    if (param_2 == 0x720) {
      ppiStack_34 = (int **)(in_ECX + 0x1a);
      puStack_38 = (undefined4 *)0x85b0d3;
      ExceptionList = &local_14;
      FUN_009a1bb0();
      ExceptionList = local_14;
      return;
    }
    if (param_2 < 0x337) {
      if (param_2 != 0x336) {
        if (param_2 == 0xcc) {
          local_20 = 0;
          ppiStack_34 = (int **)0x85af56;
          ExceptionList = &local_14;
          FUN_009a1c10();
          *(undefined4 *)(in_ECX + 0x150) = local_20;
          ExceptionList = local_14;
          return;
        }
        if (param_2 != 0x134) {
          if (param_2 != 0x2a1) {
            return;
          }
          local_1c = aiStack_4c;
          ExceptionList = &local_14;
          FUN_009885d0();
          FUN_0043bb10();
          ExceptionList = local_14;
          return;
        }
        ppiStack_34 = (int **)(in_ECX + 0x19);
        puStack_38 = (undefined4 *)0x85af2e;
        ExceptionList = &local_14;
        FUN_009a1bb0();
        ExceptionList = local_14;
        return;
      }
      ppiStack_34 = (int **)0x14;
      puStack_38 = (undefined4 *)0x85af7b;
      ExceptionList = &local_14;
      iVar2 = FUN_00aae9af();
      if (iVar2 == 0) {
        piVar3 = (int *)0x0;
      }
      else {
        ppiStack_34 = (int **)0x85af87;
        piVar3 = (int *)FUN_00832170();
      }
      ppiStack_34 = (int **)param_1;
      puStack_38 = (undefined4 *)0x85af9e;
      local_1c = piVar3;
      (**(code **)(*piVar3 + 0xc))();
      ppiStack_34 = &local_1c;
      puStack_38 = (undefined4 *)(in_ECX + 0xb0);
      iStack_3c = 0x85afaf;
      FUN_008602c0();
      ppiStack_34 = (int **)piVar3;
    }
    else {
      if (param_2 != 0x388) {
        if (param_2 != 0x47f) {
          return;
        }
        ppiStack_34 = (int **)0x18;
        puStack_38 = (undefined4 *)0x85afd8;
        ExceptionList = &local_14;
        iVar2 = FUN_00aae9af();
        if (iVar2 == 0) {
          piVar3 = (int *)0x0;
        }
        else {
          ppiStack_34 = (int **)0x85afe4;
          piVar3 = (int *)FUN_0085a180();
        }
        ppiStack_34 = (int **)param_1;
        puStack_38 = (undefined4 *)0x85aff7;
        (**(code **)(*piVar3 + 0xc))();
        ppiStack_34 = (int **)piVar3[3];
        puStack_38 = (undefined4 *)piVar3[2];
        iStack_3c = 0x85b006;
        iVar2 = FUN_0085fa30();
        if (iVar2 != 0) {
          ExceptionList = local_14;
          return;
        }
        iVar2 = *(int *)(in_ECX + 0x144);
        ppiStack_34 = (int **)0x10;
        puStack_38 = (undefined4 *)0x85b01b;
        puVar4 = (undefined4 *)FUN_00aae9af();
        if (puVar4 == (undefined4 *)0x0) {
          puVar4 = (undefined4 *)0x0;
        }
        else {
          *puVar4 = piVar3;
          puVar4[1] = iVar2;
          puVar4[2] = 0;
          *(undefined1 *)(puVar4 + 3) = 0;
        }
        iVar1 = *(int *)(in_ECX + 0x148);
        *(undefined4 **)(in_ECX + 0x144) = puVar4;
        *(int *)(in_ECX + 0x148) = iVar1 + 1;
        if (iVar1 == 0) {
          *(undefined4 **)(in_ECX + 0x140) = puVar4;
          ExceptionList = local_14;
          return;
        }
        *(undefined4 **)(iVar2 + 8) = puVar4;
        ExceptionList = local_14;
        return;
      }
      ppiStack_34 = (int **)0x14;
      puStack_38 = (undefined4 *)0x85b087;
      ExceptionList = &local_14;
      iVar2 = FUN_00aae9af();
      if (iVar2 == 0) {
        piVar3 = (int *)0x0;
      }
      else {
        ppiStack_34 = (int **)0x85b093;
        piVar3 = (int *)FUN_00832170();
      }
      ppiStack_34 = (int **)param_1;
      puStack_38 = (undefined4 *)0x85b0aa;
      local_1c = piVar3;
      (**(code **)(*piVar3 + 0xc))();
      ppiStack_34 = &local_1c;
      puStack_38 = (undefined4 *)(in_ECX + 0xcc);
      iStack_3c = 0x85b0bb;
      FUN_008602c0();
      ppiStack_34 = (int **)piVar3;
    }
  }
  else {
    if (0x895 < param_2) {
      return;
    }
    if (param_2 == 0x895) {
      ppiStack_34 = (int **)0x14;
      puStack_38 = (undefined4 *)0x85b3c7;
      ExceptionList = &local_14;
      iVar2 = FUN_00aae9af();
      if (iVar2 == 0) {
        piVar3 = (int *)0x0;
      }
      else {
        ppiStack_34 = (int **)0x85b3d3;
        piVar3 = (int *)FUN_00832170();
      }
      ppiStack_34 = (int **)param_1;
      puStack_38 = (undefined4 *)0x85b3ea;
      local_1c = piVar3;
      (**(code **)(*piVar3 + 0xc))();
      ppiStack_34 = &local_1c;
      puStack_38 = (undefined4 *)(in_ECX + 0x104);
      iStack_3c = 0x85b3fb;
      FUN_008602c0();
      ppiStack_34 = (int **)piVar3;
    }
    else {
      switch(param_2) {
      case 0x762:
        ppiStack_34 = (int **)0x85b142;
        ExceptionList = &local_14;
        uVar5 = FUN_0085ae60();
        *(undefined4 *)(in_ECX + 0x1c) = uVar5;
        ExceptionList = local_14;
        return;
      default:
        goto switchD_0085b10d_caseD_763;
      case 0x765:
        ppiStack_34 = (int **)0x10;
        puStack_38 = (undefined4 *)0x85b160;
        ExceptionList = &local_14;
        local_1c = (int *)FUN_00aae9af();
        if (local_1c == (int *)0x0) {
          local_1c = (int *)0x0;
        }
        else {
          local_1c[1] = 0x18d;
          *local_1c = (int)CProvinceValue::vftable;
          local_1c[2] = 0;
          local_1c[3] = 0;
        }
        ppiStack_34 = (int **)param_1;
        puStack_38 = (undefined4 *)0x85b191;
        (**(code **)(*local_1c + 0xc))();
        puStack_38 = &local_20;
        iStack_3c = in_ECX + 0x30;
        uStack_40 = 0x85b19f;
        FUN_00853e20();
        ExceptionList = pvStack_18;
        return;
      case 0x766:
        ppiStack_34 = (int **)0x10;
        puStack_38 = (undefined4 *)0x85b1ba;
        ExceptionList = &local_14;
        local_1c = (int *)FUN_00aae9af();
        if (local_1c == (int *)0x0) {
          local_1c = (int *)0x0;
        }
        else {
          local_1c[1] = 0x18d;
          *local_1c = (int)CProvinceValue::vftable;
          local_1c[2] = 0;
          local_1c[3] = 0;
        }
        ppiStack_34 = (int **)param_1;
        puStack_38 = (undefined4 *)0x85b1eb;
        (**(code **)(*local_1c + 0xc))();
        puStack_38 = &local_20;
        iStack_3c = in_ECX + 0x20;
        uStack_40 = 0x85b1f9;
        FUN_00853e20();
        ExceptionList = pvStack_18;
        return;
      case 0x768:
        ppiStack_34 = (int **)0x2c;
        puStack_38 = (undefined4 *)0x85b214;
        ExceptionList = &local_14;
        ppiStack_34 = (int **)FUN_00aae9af();
        local_c = 0;
        if (ppiStack_34 == (int **)0x0) {
          local_1c = (int *)0x0;
        }
        else {
          puStack_38 = (undefined4 *)0x85b22d;
          local_1c = (int *)ppiStack_34;
          local_1c = (int *)FUN_0085a1c0();
        }
        local_c = 0xffffffff;
        ppiStack_34 = (int **)param_1;
        puStack_38 = (undefined4 *)0x85b24a;
        (**(code **)(*local_1c + 0xc))();
        puStack_38 = &local_20;
        iStack_3c = in_ECX + 0x130;
        uStack_40 = 0x85b25b;
        FUN_008601f0();
        ExceptionList = pvStack_18;
        return;
      case 0x76a:
        ppiStack_34 = (int **)0x14;
        puStack_38 = (undefined4 *)0x85b276;
        ExceptionList = &local_14;
        iVar2 = FUN_00aae9af();
        if (iVar2 == 0) {
          piVar3 = (int *)0x0;
        }
        else {
          ppiStack_34 = (int **)0x85b282;
          piVar3 = (int *)FUN_00832170();
        }
        ppiStack_34 = (int **)param_1;
        puStack_38 = (undefined4 *)0x85b299;
        local_1c = piVar3;
        (**(code **)(*piVar3 + 0xc))();
        ppiStack_34 = &local_1c;
        puStack_38 = (undefined4 *)(in_ECX + 0x40);
        iStack_3c = 0x85b2a7;
        FUN_008602c0();
        ppiStack_34 = (int **)piVar3;
        break;
      case 0x76b:
        ppiStack_34 = (int **)0x14;
        puStack_38 = (undefined4 *)0x85b342;
        ExceptionList = &local_14;
        iVar2 = FUN_00aae9af();
        if (iVar2 == 0) {
          piVar3 = (int *)0x0;
        }
        else {
          ppiStack_34 = (int **)0x85b34e;
          piVar3 = (int *)FUN_00832170();
        }
        ppiStack_34 = (int **)param_1;
        puStack_38 = (undefined4 *)0x85b365;
        local_1c = piVar3;
        (**(code **)(*piVar3 + 0xc))();
        ppiStack_34 = &local_1c;
        puStack_38 = (undefined4 *)(in_ECX + 0xe8);
        iStack_3c = 0x85b376;
        FUN_008602c0();
        ppiStack_34 = (int **)piVar3;
        break;
      case 0x76c:
        ppiStack_34 = (int **)0x14;
        puStack_38 = (undefined4 *)0x85b2b7;
        ExceptionList = &local_14;
        iVar2 = FUN_00aae9af();
        if (iVar2 == 0) {
          piVar3 = (int *)0x0;
        }
        else {
          ppiStack_34 = (int **)0x85b2c3;
          piVar3 = (int *)FUN_00832170();
        }
        ppiStack_34 = (int **)param_1;
        puStack_38 = (undefined4 *)0x85b2da;
        local_1c = piVar3;
        (**(code **)(*piVar3 + 0xc))();
        ppiStack_34 = &local_1c;
        puStack_38 = (undefined4 *)(in_ECX + 0x78);
        iStack_3c = 0x85b2e8;
        FUN_008602c0();
        ppiStack_34 = (int **)piVar3;
        break;
      case 0x76d:
        ppiStack_34 = (int **)0x14;
        puStack_38 = (undefined4 *)0x85b2fb;
        ExceptionList = &local_14;
        iVar2 = FUN_00aae9af();
        if (iVar2 == 0) {
          piVar3 = (int *)0x0;
        }
        else {
          ppiStack_34 = (int **)0x85b307;
          piVar3 = (int *)FUN_00832170();
        }
        ppiStack_34 = (int **)param_1;
        puStack_38 = (undefined4 *)0x85b31e;
        local_1c = piVar3;
        (**(code **)(*piVar3 + 0xc))();
        ppiStack_34 = &local_1c;
        puStack_38 = (undefined4 *)(in_ECX + 0x94);
        iStack_3c = 0x85b32f;
        FUN_008602c0();
        ppiStack_34 = (int **)piVar3;
        break;
      case 0x771:
        ppiStack_34 = (int **)(in_ECX + 0x18);
        puStack_38 = (undefined4 *)0x85b120;
        ExceptionList = &local_14;
        FUN_009a1bb0();
        ExceptionList = local_14;
        return;
      case 0x774:
        ppiStack_34 = (int **)0x14;
        puStack_38 = (undefined4 *)0x85b389;
        ExceptionList = &local_14;
        iVar2 = FUN_00aae9af();
        if (iVar2 == 0) {
          piVar3 = (int *)0x0;
        }
        else {
          ppiStack_34 = (int **)0x85b395;
          piVar3 = (int *)FUN_00832170();
        }
        ppiStack_34 = (int **)param_1;
        puStack_38 = (undefined4 *)0x85b3ac;
        local_1c = piVar3;
        (**(code **)(*piVar3 + 0xc))();
        ppiStack_34 = &local_1c;
        puStack_38 = (undefined4 *)(in_ECX + 0x5c);
        iStack_3c = 0x85b3ba;
        FUN_008602c0();
        ppiStack_34 = (int **)piVar3;
      }
    }
  }
  puStack_38 = (undefined4 *)0x85b407;
  FUN_00860100();
switchD_0085b10d_caseD_763:
  ExceptionList = local_14;
  return;
}

