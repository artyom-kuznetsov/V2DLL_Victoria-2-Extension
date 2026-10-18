// FUN_009cd050 @ 009cd050 body=[[009cd050, 009cd402]]


void FUN_009cd050(void)

{
  short *psVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int unaff_ESI;
  int iVar5;
  undefined8 uVar6;
  undefined4 local_18;
  int local_14;
  int local_10;
  int local_c;
  char local_6;
  char local_5;
  
  local_5 = '\0';
  local_6 = '\0';
  if (*(char *)(unaff_ESI + 0x39c) != '\0') {
    psVar1 = (short *)(**(code **)(**(int **)(unaff_ESI + 0xac) + 0xf4))(&local_18);
    iVar5 = (int)*psVar1 / 2 + (int)*(short *)(unaff_ESI + 0x90);
    iVar2 = (**(code **)(**(int **)(unaff_ESI + 0xac) + 0xf4))(&local_18);
    iVar4 = (int)*(short *)(iVar2 + 2) / 2 + (int)*(short *)(unaff_ESI + 0x92);
    local_10 = iVar4;
    (**(code **)(**(int **)(*(int *)(unaff_ESI + 0x150) + 0xa0) + 0xd8))(&local_18);
    psVar1 = (short *)(**(code **)(**(int **)(unaff_ESI + 0xac) + 0xf4))(&local_14);
    local_14 = (int)(short)local_18 - (int)*psVar1;
    (**(code **)(**(int **)(*(int *)(unaff_ESI + 0x150) + 0xa0) + 0xd8))(&local_18);
    iVar3 = (**(code **)(**(int **)(unaff_ESI + 0xac) + 0xf4))(&local_c);
    iVar2 = *(int *)(unaff_ESI + 0x234);
    local_18 = (int)local_18._2_2_ - (int)*(short *)(iVar3 + 2);
    if (*(int *)(unaff_ESI + 0x394) != iVar2) {
      *(undefined4 *)(unaff_ESI + 0x9c) = *(undefined4 *)(unaff_ESI + 0x90);
      local_c = *(int *)(unaff_ESI + 0x238) - iVar2;
      iVar2 = *(int *)(unaff_ESI + 0x394) - iVar2;
      local_5 = '\x01';
      if (local_c == 0) {
        iVar2 = -1;
      }
      else if ((iVar2 < -0x189373) || (0x20c49a < iVar2)) {
        uVar6 = __allmul(iVar2,iVar2 >> 0x1f,1000,0);
        iVar2 = __alldiv(uVar6,local_c,local_c >> 0x1f);
        iVar4 = local_10;
      }
      else {
        iVar2 = (iVar2 * 1000) / local_c;
      }
      if (*(short *)(unaff_ESI + 0x244) == 0) {
        *(short *)(unaff_ESI + 0x9e) =
             (short)(int)(((float)iVar2 / 1000.0) * (float)local_18 + (float)iVar4 + 0.5);
      }
      else {
        *(short *)(unaff_ESI + 0x9c) =
             (short)(int)(((float)iVar2 / 1000.0) * (float)local_14 + (float)iVar5 + 0.5);
      }
    }
    if (*(int *)(unaff_ESI + 0x398) != *(int *)(unaff_ESI + 0x238)) {
      *(undefined4 *)(unaff_ESI + 0xa0) = *(undefined4 *)(unaff_ESI + 0x90);
      local_c = *(int *)(unaff_ESI + 0x238) - *(int *)(unaff_ESI + 0x234);
      iVar2 = *(int *)(unaff_ESI + 0x398) - *(int *)(unaff_ESI + 0x234);
      local_6 = '\x01';
      if (local_c == 0) {
        iVar2 = -1;
      }
      else if ((iVar2 < -0x189373) || (0x20c49a < iVar2)) {
        uVar6 = __allmul(iVar2,iVar2 >> 0x1f,1000,0);
        iVar2 = __alldiv(uVar6,local_c,local_c >> 0x1f);
        iVar4 = local_10;
      }
      else {
        iVar2 = (iVar2 * 1000) / local_c;
      }
      if (*(short *)(unaff_ESI + 0x244) == 0) {
        *(short *)(unaff_ESI + 0xa2) =
             (short)(int)(((float)iVar2 / 1000.0) * (float)local_18 + (float)iVar4 + 0.5);
      }
      else {
        *(short *)(unaff_ESI + 0xa0) =
             (short)(int)(((float)iVar2 / 1000.0) * (float)local_14 + (float)iVar5 + 0.5);
      }
    }
  }
  if (*(int **)(unaff_ESI + 0x200) != (int *)0x0) {
    iVar2 = **(int **)(unaff_ESI + 0x200);
    if (local_5 == '\0') {
      (**(code **)(iVar2 + 0x38))();
    }
    else {
      (**(code **)(iVar2 + 0x34))();
      iVar2 = (*(int **)(unaff_ESI + 0x200))[0x2c];
      local_18 = CONCAT22((short)((uint)iVar2 >> 0x10) + *(short *)(unaff_ESI + 0x9e),
                          *(short *)(unaff_ESI + 0x9c) + (short)iVar2);
      (**(code **)(**(int **)(unaff_ESI + 0x200) + 200))(local_18);
    }
  }
  if (*(int **)(unaff_ESI + 0x204) != (int *)0x0) {
    iVar2 = **(int **)(unaff_ESI + 0x204);
    if (local_6 != '\0') {
      (**(code **)(iVar2 + 0x34))();
      iVar2 = (*(int **)(unaff_ESI + 0x204))[0x2c];
      local_18 = CONCAT22((short)((uint)iVar2 >> 0x10) + *(short *)(unaff_ESI + 0xa2),
                          *(short *)(unaff_ESI + 0xa0) + (short)iVar2);
      (**(code **)(**(int **)(unaff_ESI + 0x204) + 200))(local_18);
      return;
    }
    (**(code **)(iVar2 + 0x38))();
  }
  return;
}

