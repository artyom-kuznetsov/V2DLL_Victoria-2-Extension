// FUN_005c61b0 @ 005c61b0 body=[[005c61b0, 005c62da] [005c62e1, 005c63b5] [005c63bf, 005c65a6] [005c65aa, 005c65d8] [005c65e2, 005c6608] [005c6612, 005c6638] [005c663c, 005c666c] [005c6676, 005c669f] [005c66a9, 005c66ce] [005c66d2, 005c6718] [005c6722, 005c673b]]


void FUN_005c61b0(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  int iVar7;
  int *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_00b9f668;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *in_ECX = (int)CUnit::vftable;
  in_ECX[2] = (int)CUnit::vftable;
  local_8 = 10;
  if ((undefined4 *)in_ECX[0x29] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)in_ECX[0x29])(1);
  }
  if (((int *)in_ECX[0x36] != (int *)0x0) &&
     (cVar4 = (**(code **)(*(int *)in_ECX[0x36] + 0x20))(), cVar4 != '\0')) {
    iVar7 = in_ECX[0x36];
    if (*(int *)(iVar7 + 0x88) != 0) {
      *(undefined4 *)(iVar7 + 0x88) = 0;
      uVar5 = FUN_005b6140();
      FUN_005cbcc0(uVar5);
    }
    *(undefined4 *)(iVar7 + 0x88) = 0;
  }
  iVar7 = in_ECX[0x17];
  if (iVar7 != 0) {
    in_ECX[0x17] = 0;
    for (piVar1 = *(int **)(iVar7 + 0x4c); (piVar1 != (int *)0x0 && ((int *)*piVar1 != in_ECX));
        piVar1 = (int *)piVar1[2]) {
    }
    FUN_005f2ae0(piVar1);
  }
  piVar1 = (int *)in_ECX[0x13];
joined_r0x005c6277:
  if (piVar1 != (int *)0x0) {
    iVar7 = *piVar1;
    piVar1 = (int *)piVar1[2];
    if (*(int **)(iVar7 + 0x5c) == in_ECX) {
      *(undefined4 *)(iVar7 + 0x5c) = 0;
    }
    for (piVar2 = (int *)in_ECX[0x13]; piVar2 != (int *)0x0; piVar2 = (int *)piVar2[2]) {
      if (*piVar2 == iVar7) {
        if (piVar2 != (int *)0x0) {
          if ((char)in_ECX[0x16] == '\0') {
            iVar7 = piVar2[1];
            iVar3 = piVar2[2];
            if (iVar7 != 0) {
              *(int *)(iVar7 + 8) = iVar3;
            }
            if (iVar3 != 0) {
              *(int *)(iVar3 + 4) = iVar7;
            }
            if (piVar2 == (int *)in_ECX[0x13]) {
              in_ECX[0x13] = iVar3;
            }
            if (piVar2 == (int *)in_ECX[0x14]) {
              in_ECX[0x14] = iVar7;
            }
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b(piVar2);
          }
          *(undefined1 *)(piVar2 + 3) = 1;
        }
        break;
      }
    }
    goto joined_r0x005c6277;
  }
  FUN_005d57a0(in_ECX);
  FUN_004f9ca0(in_ECX + 0x45);
  iVar7 = in_ECX[0x10];
  while (iVar7 != 0) {
    FUN_0068a900(*(undefined4 *)in_ECX[0xe]);
    iVar7 = in_ECX[0x10];
  }
  piVar1 = (int *)in_ECX[0x52];
joined_r0x005c6342:
  if (piVar1 != (int *)0x0) {
    piVar2 = (int *)*piVar1;
    piVar1 = (int *)piVar1[2];
    (**(code **)(*piVar2 + 0x198))();
    for (puVar6 = (undefined4 *)in_ECX[0x52]; puVar6 != (undefined4 *)0x0;
        puVar6 = (undefined4 *)puVar6[2]) {
      if ((int *)*puVar6 == piVar2) {
        if (puVar6 != (undefined4 *)0x0) {
          if ((char)in_ECX[0x55] == '\0') {
            iVar7 = puVar6[1];
            iVar3 = puVar6[2];
            if (iVar7 != 0) {
              *(int *)(iVar7 + 8) = iVar3;
            }
            if (iVar3 != 0) {
              *(int *)(iVar3 + 4) = iVar7;
            }
            if (puVar6 == (undefined4 *)in_ECX[0x52]) {
              in_ECX[0x52] = iVar3;
            }
            if (puVar6 == (undefined4 *)in_ECX[0x53]) {
              in_ECX[0x53] = iVar7;
            }
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b(puVar6);
          }
          *(undefined1 *)(puVar6 + 3) = 1;
        }
        break;
      }
    }
    goto joined_r0x005c6342;
  }
  if (*(char *)(DAT_012588e8 + 0xd1c) != '\0') {
    piVar2 = *(int **)(*(int *)(DAT_012588e8 + 0xb24) + 0x1600);
    for (piVar1 = piVar2; piVar1 != (int *)0x0; piVar1 = (int *)piVar1[2]) {
      if ((int *)*piVar1 == in_ECX) goto joined_r0x005c6404;
    }
  }
LAB_005c6418:
  iVar7 = in_ECX[0x37];
  if (iVar7 != 0) {
    if ((*(char *)(*(int *)(iVar7 + 0x5c) + 0x2a) == '\0') ||
       (cVar4 = (**(code **)(*in_ECX + 0x3c))(), cVar4 == '\0')) {
      for (puVar6 = *(undefined4 **)(iVar7 + 0xfc);
          (puVar6 != (undefined4 *)0x0 && ((int *)*puVar6 != in_ECX));
          puVar6 = (undefined4 *)puVar6[2]) {
      }
      FUN_005f2ae0(puVar6);
      for (puVar6 = *(undefined4 **)(iVar7 + 0xec);
          (puVar6 != (undefined4 *)0x0 && ((int *)*puVar6 != in_ECX));
          puVar6 = (undefined4 *)puVar6[2]) {
      }
    }
    else {
      if (*(int *)(iVar7 + 0x158) != 0) {
        for (puVar6 = *(undefined4 **)(*(int *)(iVar7 + 0x158) + 8);
            (puVar6 != (undefined4 *)0x0 && ((int *)*puVar6 != in_ECX));
            puVar6 = (undefined4 *)puVar6[2]) {
        }
        FUN_005f2ae0(puVar6);
      }
      for (puVar6 = *(undefined4 **)(iVar7 + 0xec);
          (puVar6 != (undefined4 *)0x0 && ((int *)*puVar6 != in_ECX));
          puVar6 = (undefined4 *)puVar6[2]) {
      }
      FUN_005f2ae0(puVar6);
      for (puVar6 = *(undefined4 **)(iVar7 + 0xfc);
          (puVar6 != (undefined4 *)0x0 && ((int *)*puVar6 != in_ECX));
          puVar6 = (undefined4 *)puVar6[2]) {
      }
    }
    FUN_005f2ae0(puVar6);
    FUN_004b7be0(iVar7);
    FUN_004c77b0(*(undefined4 *)(in_ECX[0x37] + 0x5c),in_ECX);
  }
  if ((int *)in_ECX[0x43] != (int *)0x0) {
    (**(code **)(*(int *)in_ECX[0x43] + 0x38))();
    iVar7 = (**(code **)(*(int *)in_ECX[0x42] + 0x38))();
    iVar7 = iVar7 + 0xc;
    (**(code **)(*(int *)in_ECX[0x42] + 0x40))(iVar7);
    FUN_009962f0(iVar7);
    in_ECX[0x43] = 0;
  }
  if ((int *)in_ECX[0x44] != (int *)0x0) {
    piVar1 = (int *)in_ECX[0x42];
    uVar5 = (**(code **)(*(int *)in_ECX[0x44] + 0x44))();
    (**(code **)(*piVar1 + 0x40))(uVar5);
    FUN_009962f0(uVar5);
  }
  if (0xf < (uint)in_ECX[0x5f]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[0x5a]);
  }
  in_ECX[0x5f] = 0xf;
  in_ECX[0x5e] = 0;
  *(undefined1 *)(in_ECX + 0x5a) = 0;
  if (in_ECX[0x52] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[0x52]);
  }
  in_ECX[0x52] = 0;
  in_ECX[0x53] = 0;
  in_ECX[0x54] = 0;
  if (in_ECX[0x4c] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[0x4c]);
  }
  in_ECX[0x4c] = 0;
  in_ECX[0x4d] = 0;
  in_ECX[0x4e] = 0;
  if (0xf < (uint)in_ECX[0x4a]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[0x45]);
  }
  in_ECX[0x4a] = 0xf;
  in_ECX[0x49] = 0;
  *(undefined1 *)(in_ECX + 0x45) = 0;
  FUN_00849e90();
  if (in_ECX[0x24] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[0x24]);
  }
  in_ECX[0x24] = 0;
  in_ECX[0x25] = 0;
  in_ECX[0x26] = 0;
  FUN_004e9430();
  if (in_ECX[0x13] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[0x13]);
  }
  in_ECX[0x13] = 0;
  in_ECX[0x14] = 0;
  in_ECX[0x15] = 0;
  in_ECX[2] = (int)&PTR_FUN_00e3a544;
  FUN_009c1650();
  if ((uint)in_ECX[0xc] < 0x10) {
    in_ECX[0xc] = 0xf;
    in_ECX[0xb] = 0;
    iVar7 = DAT_012588e8;
    local_8 = local_8 & 0xffffff00;
    *(undefined1 *)(in_ECX + 7) = 0;
    *in_ECX = (int)CSelectable::vftable;
    if ((char)in_ECX[1] != '\0') {
      (**(code **)(**(int **)(iVar7 + 0xb24) + 0xa4))(1);
    }
    if (in_ECX[0xe] == 0) {
      in_ECX[0xe] = 0;
      in_ECX[0xf] = 0;
      in_ECX[0x10] = 0;
      ExceptionList = local_10;
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[0xe]);
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(in_ECX[7]);
joined_r0x005c6404:
  for (; (piVar2 != (int *)0x0 && ((int *)*piVar2 != in_ECX)); piVar2 = (int *)piVar2[2]) {
  }
  FUN_005f2ae0(piVar2);
  goto LAB_005c6418;
}

