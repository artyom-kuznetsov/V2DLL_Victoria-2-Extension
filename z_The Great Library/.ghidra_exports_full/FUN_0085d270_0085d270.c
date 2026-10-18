// FUN_0085d270 @ 0085d270 body=[[0085d270, 0085d35e] [0085d360, 0085d468] [0085d470, 0085d62c] [0085d630, 0085d695] [0085d69f, 0085d6ba]]


void FUN_0085d270(void)

{
  int *piVar1;
  undefined4 *puVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int unaff_ESI;
  float fVar7;
  ulonglong in_XMM0_Qa;
  undefined1 local_64 [8];
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_40;
  int local_18;
  int *local_10;
  uint *local_8;
  
  iVar4 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(unaff_ESI + 0xc) * 4);
  local_10 = *(int **)(unaff_ESI + 8);
  local_18 = iVar4;
  FUN_0085aa20(unaff_ESI,
               *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(unaff_ESI + 0xc) * 4) + 0x20c);
  local_10 = *(int **)(unaff_ESI + 8);
  if ((*(int *)(unaff_ESI + 0xc) <
       *(int *)(DAT_012588e8 + 0xaf0) - *(int *)(DAT_012588e8 + 0xaec) >> 2) &&
     (*(int *)(*(int *)(DAT_012588e8 + 0xaec) + *(int *)(unaff_ESI + 0xc) * 4) == 0)) {
    if ((*(int *)(iVar4 + 0xc00) != 0) &&
       (cVar3 = (**(code **)(**(int **)(iVar4 + 0xc00) + 0x18))(), cVar3 != '\0')) {
      (**(code **)(*(int *)(*(int *)(iVar4 + 0xc00) + 0x7c) + 0x30))();
    }
    if (*(char *)(unaff_ESI + 0x19) != '\0') {
      return;
    }
    FUN_008a8650(0);
    local_5c = *(undefined4 *)(unaff_ESI + 8);
    local_58 = *(undefined4 *)(unaff_ESI + 0xc);
    local_40 = FUN_008a88d0();
    iVar4 = FUN_00875040();
    local_8 = (uint *)(iVar4 + 0x28);
    piVar6 = *(int **)(iVar4 + 0x28);
    while (((int *)*local_8 <= piVar6 && (piVar6 < (int *)local_8[1]))) {
      piVar1 = (int *)*piVar6;
      piVar6 = piVar6 + 1;
      local_10 = piVar6;
      cVar3 = (**(code **)(*piVar1 + 0x18))();
      if (cVar3 != '\0') {
        cVar3 = (**(code **)(piVar1[9] + 0x18))(local_64);
        fVar7 = (float)in_XMM0_Qa;
        if (cVar3 != '\0') {
          FUN_00874ea0(piVar1,local_64);
          fVar7 = (fVar7 + 0.0005) * 1000.0;
          in_XMM0_Qa = (ulonglong)(uint)fVar7;
          FUN_00401000(fVar7);
          iVar4 = FUN_00b31c00();
          piVar6 = local_10;
          if (0 < iVar4) {
            FUN_00401000(0x46ea6100);
            iVar5 = FUN_00b31c00();
            __alldiv((longlong)iVar5 * (longlong)iVar4,1000,0);
            in_XMM0_Qa = 0x43fa4001;
            FUN_00401000(0x43fa4001);
            FUN_00b31c00();
            (**(code **)(piVar1[0x10] + 0x30))();
            piVar6 = local_10;
          }
        }
      }
    }
    iVar4 = FUN_00875040();
    local_8 = (uint *)(iVar4 + 0xc);
    piVar6 = *(int **)(iVar4 + 0xc);
    while ((iVar4 = local_18, (int *)*local_8 <= piVar6 && (piVar6 < (int *)local_8[1]))) {
      piVar1 = (int *)*piVar6;
      piVar6 = piVar6 + 1;
      local_10 = piVar6;
      cVar3 = (**(code **)(*piVar1 + 0x18))();
      if (cVar3 != '\0') {
        cVar3 = (**(code **)(piVar1[9] + 0x18))(local_64);
        fVar7 = (float)in_XMM0_Qa;
        if (cVar3 != '\0') {
          FUN_00874ea0(piVar1,local_64);
          fVar7 = (fVar7 + 0.0005) * 1000.0;
          in_XMM0_Qa = (ulonglong)(uint)fVar7;
          FUN_00401000(fVar7);
          iVar4 = FUN_00b31c00();
          piVar6 = local_10;
          if (0 < iVar4) {
            FUN_00401000(0x46ea6100);
            iVar5 = FUN_00b31c00();
            __alldiv((longlong)iVar5 * (longlong)iVar4,1000,0);
            in_XMM0_Qa = 0x43fa4001;
            FUN_00401000(0x43fa4001);
            FUN_00b31c00();
            (**(code **)(piVar1[0x10] + 0x30))();
            piVar6 = local_10;
          }
        }
      }
    }
  }
  if (*(char *)(unaff_ESI + 0x19) == '\0') {
    FUN_0057afc0(unaff_ESI + 0xdc);
    FUN_008601b0(unaff_ESI + 0xcc);
    FUN_0085d6c0(unaff_ESI);
    FUN_0085d910(unaff_ESI);
    FUN_0085db40(unaff_ESI);
    FUN_0085c5b0(unaff_ESI + 0x40);
    FUN_0085e0e0(unaff_ESI);
    FUN_0085c5b0(unaff_ESI + 0x78);
    FUN_0085c5b0(unaff_ESI + 0x5c);
    FUN_0085e9d0(unaff_ESI);
    FUN_0085c5b0(unaff_ESI + 0x94);
    FUN_0085c5b0(unaff_ESI + 0xb0);
    FUN_0085f5c0(unaff_ESI);
    FUN_0085c5b0(unaff_ESI + 0xe8);
    if (*(char *)(iVar4 + 0x31) == '\0') {
      FUN_0057afc0(unaff_ESI + 0x114);
      FUN_008601b0(unaff_ESI + 0x104);
    }
    else {
      FUN_0085f3a0(unaff_ESI);
    }
    piVar6 = *(int **)(unaff_ESI + 0x140);
    while (piVar6 != (int *)0x0) {
      puVar2 = (undefined4 *)*piVar6;
      piVar6 = (int *)piVar6[2];
      for (piVar1 = *(int **)(unaff_ESI + 0x140); piVar1 != (int *)0x0; piVar1 = (int *)piVar1[2]) {
        if ((undefined4 *)*piVar1 == puVar2) {
          if (piVar1 != (int *)0x0) {
            if (*(char *)(unaff_ESI + 0x14c) == '\0') {
              iVar4 = piVar1[1];
              iVar5 = piVar1[2];
              if (iVar4 != 0) {
                *(int *)(iVar4 + 8) = iVar5;
              }
              if (iVar5 != 0) {
                *(int *)(iVar5 + 4) = iVar4;
              }
              if (piVar1 == *(int **)(unaff_ESI + 0x140)) {
                *(int *)(unaff_ESI + 0x140) = iVar5;
              }
              if (piVar1 == *(int **)(unaff_ESI + 0x144)) {
                *(int *)(unaff_ESI + 0x144) = iVar4;
              }
                    /* WARNING: Subroutine does not return */
              FUN_00aae91b(piVar1);
            }
            *(undefined1 *)(piVar1 + 3) = 1;
          }
          break;
        }
      }
      if (puVar2 != (undefined4 *)0x0) {
        (**(code **)*puVar2)(1);
      }
    }
  }
  return;
}

