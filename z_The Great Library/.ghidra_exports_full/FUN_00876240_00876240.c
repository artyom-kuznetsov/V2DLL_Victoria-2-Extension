// FUN_00876240 @ 00876240 body=[[00876240, 00876941]]


/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */
/* WARNING: Unable to track spacebase fully for stack */

void FUN_00876240(int *param_1)

{
  int iVar1;
  int iVar2;
  char cVar3;
  int in_EAX;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int unaff_ESI;
  undefined4 local_24;
  undefined4 *local_8;
  
  iVar6 = DAT_012587e4;
  if ((int)(*(int *)(DAT_012587e4 + 8) - *(int *)(DAT_012587e4 + 4) & 0xfffffffcU) < 4) {
    return;
  }
  if (param_1[0x43] != 0) {
    local_24 = 0x876277;
    FUN_00504750();
    *(int *)(unaff_ESI + 8) = param_1[0x42];
    *(int *)(unaff_ESI + 0xc) = param_1[0x43];
    *(undefined4 *)(unaff_ESI + 0x10) = 0;
    return;
  }
  iVar1 = *param_1;
  if (iVar1 < 0x477) {
    if (iVar1 == 0x476) {
      local_24 = 0x8765ba;
      FUN_00504750();
      *(undefined4 *)(unaff_ESI + 0x10) =
           *(undefined4 *)
            (*(int *)(*(int *)(*(int *)(DAT_0125870c + 0x2238) + *(int *)(in_EAX + 0x10) * 4) + 0x5c
                     ) + 0xdc);
LAB_00876542:
      *(undefined4 *)(unaff_ESI + 8) = 0x2d2d2d;
      *(undefined4 *)(unaff_ESI + 0xc) = 0;
      return;
    }
    if (iVar1 < 0x2f1) {
      if (iVar1 == 0x2f0) {
        local_24 = 0x876414;
        FUN_00504750();
        local_24 = 0x87641e;
        cVar3 = (**(code **)(**(int **)(in_EAX + 0x14) + 0x20))();
        iVar6 = DAT_012588e8;
        if (cVar3 != '\0') {
          *(undefined4 *)(unaff_ESI + 0x40) = *(undefined4 *)(in_EAX + 0x40);
          *(undefined4 *)(unaff_ESI + 0x44) = *(undefined4 *)(in_EAX + 0x44);
          *(undefined4 *)(unaff_ESI + 0x10) = 0;
          iVar6 = *(int *)(*(int *)(in_EAX + 0x14) + 100);
          *(undefined4 *)(unaff_ESI + 8) = *(undefined4 *)(iVar6 + 0x128);
          *(undefined4 *)(unaff_ESI + 0xc) = *(undefined4 *)(iVar6 + 300);
          local_24 = 0x876452;
          uVar4 = FUN_004e0a40();
          *(undefined4 *)(unaff_ESI + 0x14) = uVar4;
          return;
        }
        if (*(int *)(in_EAX + 0x18) != 0) {
          *(undefined4 *)(unaff_ESI + 0x18) = 0;
          iVar6 = *(int *)(*(int *)(*(int *)(iVar6 + 0xacc) + *(int *)(in_EAX + 0x18) * 4) + 0x188);
          *(undefined4 *)(unaff_ESI + 8) = *(undefined4 *)(iVar6 + 0x58);
          *(undefined4 *)(unaff_ESI + 0xc) = *(undefined4 *)(iVar6 + 0x5c);
          return;
        }
        goto LAB_008767f0;
      }
      if (iVar1 < 0x297) {
        if (iVar1 == 0x296) {
          local_24 = 0x876390;
          FUN_00504750();
          iVar6 = *(int *)(*(int *)(DAT_0125870c + 0x2238) + *(int *)(in_EAX + 0x10) * 4);
          *(undefined4 *)(unaff_ESI + 0x10) = 0;
          *(undefined4 *)(unaff_ESI + 8) = *(undefined4 *)(iVar6 + 0x130);
          *(undefined4 *)(unaff_ESI + 0xc) = *(undefined4 *)(iVar6 + 0x134);
          return;
        }
        if (iVar1 == 0xc) {
          local_24 = 0x87635e;
          FUN_00504750();
          *(int *)(unaff_ESI + 0x10) = param_1[0x41];
          *(undefined4 *)(unaff_ESI + 8) = 0x2d2d2d;
          *(undefined4 *)(unaff_ESI + 0xc) = 0;
          return;
        }
        if (iVar1 == 0x295) {
          local_24 = 0x8762ec;
          FUN_00504750();
          if (*(int *)(in_EAX + 0x18) == 0) {
            iVar6 = *(int *)(*(int *)(DAT_0125870c + 0x2238) + *(int *)(in_EAX + 0x10) * 4);
            *(undefined4 *)(unaff_ESI + 0x10) = 0;
            *(undefined4 *)(unaff_ESI + 8) = *(undefined4 *)(iVar6 + 0x128);
            *(undefined4 *)(unaff_ESI + 0xc) = *(undefined4 *)(iVar6 + 300);
            return;
          }
          iVar6 = *(int *)(*(int *)(*(int *)(DAT_012588e8 + 0xacc) + *(int *)(in_EAX + 0x18) * 4) +
                          0x188);
          *(undefined4 *)(unaff_ESI + 8) = *(undefined4 *)(iVar6 + 0x58);
          *(undefined4 *)(unaff_ESI + 0xc) = *(undefined4 *)(iVar6 + 0x5c);
          *(undefined4 *)(unaff_ESI + 0x18) = 0;
          return;
        }
      }
      else if (iVar1 == 0x2c9) {
        local_24 = 0x8763da;
        FUN_00504750();
        local_24 = 0x8763e4;
        cVar3 = (**(code **)(**(int **)(in_EAX + 0x14) + 0x20))();
        if (cVar3 != '\0') {
          *(undefined4 *)(unaff_ESI + 0x10) =
               *(undefined4 *)(*(int *)(*(int *)(in_EAX + 0x14) + 100) + 0x58);
          local_24 = 0x8763fd;
          uVar4 = FUN_004e0a40();
          *(undefined4 *)(unaff_ESI + 0x14) = uVar4;
          return;
        }
        goto LAB_008767f0;
      }
    }
    else {
      switch(iVar1) {
      case 0x3de:
        local_24 = 0x876594;
        FUN_00504750();
        *(undefined4 *)(unaff_ESI + 8) = *(undefined4 *)(in_EAX + 0x2c);
        *(undefined4 *)(unaff_ESI + 0xc) = *(undefined4 *)(in_EAX + 0x30);
        *(undefined4 *)(unaff_ESI + 0x10) = *(undefined4 *)(in_EAX + 0x34);
        return;
      case 1000:
        local_24 = 0x8764c5;
        FUN_00504750();
        iVar6 = *(int *)(*(int *)(iVar6 + 4) + *(int *)(in_EAX + 0xc) * 4);
        iVar1 = *(int *)(iVar6 + 0xd5c);
        iVar6 = *(int *)(iVar6 + 0xd58);
        local_24 = 0x8764eb;
        iVar5 = FUN_009b7910();
        iVar5 = iVar5 % (iVar1 - iVar6 >> 3);
        iVar6 = *(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(in_EAX + 0xc) * 4) + 0xd58);
        *(undefined4 *)(unaff_ESI + 8) = *(undefined4 *)(iVar6 + iVar5 * 8);
        *(undefined4 *)(unaff_ESI + 0xc) = *(undefined4 *)(iVar6 + 4 + iVar5 * 8);
        return;
      case 0x405:
        local_24 = 0x876568;
        FUN_00504750();
        iVar6 = *(int *)(in_EAX + 0x24);
        *(undefined4 *)(unaff_ESI + 8) = *(undefined4 *)(iVar6 + 8);
        *(undefined4 *)(unaff_ESI + 0xc) = *(undefined4 *)(iVar6 + 0xc);
        *(undefined4 *)(unaff_ESI + 0x10) = *(undefined4 *)(*(int *)(in_EAX + 0x24) + 0x10);
        return;
      case 0x442:
        local_24 = 0x87652a;
        FUN_00504750();
        *(undefined4 *)(unaff_ESI + 0x10) =
             *(undefined4 *)(*(int *)(*(int *)(iVar6 + 4) + *(int *)(in_EAX + 0xc) * 4) + 0xbe4);
        goto LAB_00876542;
      }
    }
  }
  else if (iVar1 < 0x748) {
    if (iVar1 == 0x747) {
      if ((*(int *)(in_EAX + 0x38) == 0) && (*(int *)(in_EAX + 0x3c) == 0)) {
        return;
      }
      local_24 = *(undefined4 *)(in_EAX + 0x3c);
      iVar6 = FUN_009c16d0(*(int *)(in_EAX + 0x38));
      if (iVar6 == 0) {
        return;
      }
      if (*(int *)(iVar6 + 0x48) == 0) {
        return;
      }
      local_24 = 0x8767aa;
      FUN_00504750();
      *(undefined4 *)(unaff_ESI + 0x10) = 0;
      *(undefined4 *)(unaff_ESI + 8) = *(undefined4 *)(iVar6 + 0x44);
      *(undefined4 *)(unaff_ESI + 0xc) = *(undefined4 *)(iVar6 + 0x48);
      return;
    }
    switch(iVar1) {
    case 0x655:
      local_24 = 0x876689;
      FUN_00504750();
      iVar6 = *(int *)(*(int *)(iVar6 + 4) + *(int *)(in_EAX + 0xc) * 4);
      *(undefined4 *)(unaff_ESI + 8) = *(undefined4 *)(iVar6 + 0x1428);
      *(undefined4 *)(unaff_ESI + 0xc) = *(undefined4 *)(iVar6 + 0x142c);
      return;
    case 0x6a5:
      local_24 = 0x876615;
      FUN_00504750();
      iVar6 = *(int *)(*(int *)(*(int *)(*(int *)(iVar6 + 4) + *(int *)(in_EAX + 0xc) * 4) + 0xe64)
                      + 0x50);
      *(undefined4 *)(unaff_ESI + 8) = *(undefined4 *)(iVar6 + 0x1c);
      *(undefined4 *)(unaff_ESI + 0xc) = *(undefined4 *)(iVar6 + 0x20);
      return;
    case 0x717:
      local_24 = 0x8766be;
      FUN_00504750();
      iVar6 = *(int *)(*(int *)(DAT_0125870c + 0x2238) + *(int *)(in_EAX + 0x10) * 4);
      iVar1 = *(int *)(iVar6 + 0xf4);
      local_24 = 0x8766e4;
      iVar5 = iVar1 * -8;
      local_8 = (undefined4 *)(&stack0xffffffe0 + iVar5);
      piVar7 = *(int **)(iVar6 + 0xec);
      param_1 = (int *)0x0;
      if (piVar7 != (int *)0x0) {
        do {
          iVar2 = *piVar7;
          piVar7 = (int *)piVar7[2];
          if ((*(int *)(iVar2 + 0x74) != 0) && (*(int *)(iVar2 + 0xc4) != *(int *)(iVar6 + 300))) {
            uVar4 = *(undefined4 *)(iVar2 + 0xc4);
            param_1 = (int *)((int)param_1 + 1);
            *local_8 = *(undefined4 *)(iVar2 + 0xc0);
            local_8[1] = uVar4;
            local_8 = local_8 + 2;
          }
        } while (piVar7 != (int *)0x0);
        if (0 < (int)param_1) {
          (&local_24)[iVar1 * -2] = 0x87674f;
          iVar6 = FUN_009b7910();
          uVar4 = *(undefined4 *)(&stack0xffffffe4 + (iVar6 % (int)param_1) * 8 + iVar5);
          *(undefined4 *)(unaff_ESI + 8) =
               *(undefined4 *)(&stack0xffffffe0 + (iVar6 % (int)param_1) * 8 + iVar5);
          *(undefined4 *)(unaff_ESI + 0xc) = uVar4;
          return;
        }
      }
      goto LAB_008767f0;
    case 0x727:
      local_24 = 0x87664d;
      FUN_00504750();
      iVar6 = *(int *)(*(int *)(iVar6 + 4) + *(int *)(in_EAX + 0xc) * 4);
      *(undefined4 *)(unaff_ESI + 8) = *(undefined4 *)(iVar6 + 0xcf8);
      *(undefined4 *)(unaff_ESI + 0xc) = *(undefined4 *)(iVar6 + 0xcfc);
      *(undefined4 *)(unaff_ESI + 0x10) = 0;
      return;
    }
  }
  else {
    if (iVar1 == 0x879) {
      local_24 = 0x8768c2;
      FUN_00504750();
      if (*(int *)(in_EAX + 0x14) != 0) {
        local_24 = 0x8768d2;
        cVar3 = (**(code **)(**(int **)(in_EAX + 0x14) + 0x20))();
        if (cVar3 != '\0') {
          local_24 = 0x8768e9;
          FUN_008a8d90();
          local_24 = 0x8768ee;
          uVar4 = FUN_004e0a40();
          *(undefined4 *)(unaff_ESI + 0x14) = uVar4;
          return;
        }
      }
      if ((*(int *)(in_EAX + 0x10) != 0) &&
         (*(int *)(*(int *)(*(int *)(DAT_0125870c + 0x2238) + *(int *)(in_EAX + 0x10) * 4) + 0x188)
          != 0)) {
        *(undefined4 *)(unaff_ESI + 0x10) = 0;
        local_24 = 0x876937;
        FUN_008a8d90();
        return;
      }
      goto LAB_008767f0;
    }
    if (iVar1 == 0x9eb) {
      local_24 = 0x876867;
      FUN_00504750();
      iVar6 = *(int *)(*(int *)(DAT_012588e8 + 0xcf8) + 8);
      if ((iVar6 != 0) &&
         (*(int *)(*(int *)(*(int *)(DAT_012588e8 + 0xacc) + *(int *)(iVar6 + 8) * 4) + 0x188) != 0)
         ) {
        local_24 = 0x87689f;
        FUN_008a8d90();
        local_24 = 0x8768a4;
        uVar4 = FUN_004e0a40();
        *(undefined4 *)(unaff_ESI + 0x14) = uVar4;
        *(undefined4 *)(unaff_ESI + 0x10) = 0;
        return;
      }
      goto LAB_008767f0;
    }
    if (iVar1 == 0xa26) {
      local_24 = 0x876808;
      FUN_00504750();
      if (((*(int *)(in_EAX + 0x18) != 0) &&
          (iVar6 = *(int *)(*(int *)(*(int *)(DAT_012588e8 + 0xacc) + *(int *)(in_EAX + 0x18) * 4) +
                           0x188), iVar6 != 0)) && (*(int *)(iVar6 + 0x288) != 0)) {
        *(undefined4 *)(unaff_ESI + 8) = *(undefined4 *)(iVar6 + 0x284);
        *(undefined4 *)(unaff_ESI + 0xc) = *(undefined4 *)(iVar6 + 0x288);
        *(undefined4 *)(unaff_ESI + 0x18) = 0;
        local_24 = 0x87684d;
        uVar4 = FUN_004e0a40();
        *(undefined4 *)(unaff_ESI + 0x14) = uVar4;
        *(undefined4 *)(unaff_ESI + 0x10) = 0;
        return;
      }
      goto LAB_008767f0;
    }
  }
  local_24 = 0x8767ec;
  FUN_00504750();
  *(undefined1 *)(unaff_ESI + 0x1d) = 1;
LAB_008767f0:
  *(undefined1 *)(unaff_ESI + 0x1c) = 0;
  return;
}

