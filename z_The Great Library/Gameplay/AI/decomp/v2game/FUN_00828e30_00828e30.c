// FUN_00828e30 @ 00828e30 body=[[00828e30, 00828e7c] [00828e80, 00828f8d]]


int FUN_00828e30(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int in_EAX;
  int unaff_EDI;
  double dVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  int local_14;
  int local_10;
  int local_c;
  float local_8;
  
  if (((in_EAX == 0) || (*(int *)(unaff_EDI + 0xb4) < 1)) ||
     (local_10 = **(int **)(unaff_EDI + 0xac), local_10 == 0)) {
    return 0;
  }
  piVar1 = *(int **)(in_EAX + 4);
  local_8 = 1e+06;
  local_c = 0;
  do {
    if (piVar1 == (int *)0x0) {
      return local_c;
    }
    iVar2 = *piVar1;
    piVar1 = (int *)piVar1[2];
    FUN_004a0e80(DAT_0125870c,&local_14);
    auVar5._0_4_ = (float)((double)local_14 / 1000.0);
    auVar5._4_8_ = (ulonglong)((double)local_14 / 1000.0) >> 0x20;
    auVar5._12_4_ = 0;
    if (*(int *)(iVar2 + 300) == *(int *)(unaff_EDI + 0x38)) {
      dVar4 = (double)auVar5._0_4_ - 400.0;
LAB_00828f40:
      auVar5._0_4_ = (float)dVar4;
      auVar5._4_8_ = (ulonglong)dVar4 >> 0x20;
      auVar5._12_4_ = 0;
    }
    else {
      iVar3 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(unaff_EDI + 0x38) * 4);
      if ((*(int *)(iVar2 + 300) == *(int *)(iVar3 + 0x20)) ||
         (((*(int *)(*(int *)(*(int *)(iVar3 + 0xbe8) + *(int *)(iVar2 + 300) * 4) + 0x34) == 0 &&
           (((*(char *)(iVar2 + 0x128) != 'R' || (*(char *)(iVar2 + 0x129) != 'E')) ||
            (*(char *)(iVar2 + 0x12a) != 'B')))) &&
          (((*(char *)(iVar3 + 0x1c) != 'R' || (*(char *)(iVar3 + 0x1d) != 'E')) ||
           (*(char *)(iVar3 + 0x1e) != 'B')))))) {
        dVar4 = (double)auVar5._0_4_ + 5000.0;
        goto LAB_00828f40;
      }
    }
    if (*(int *)(*(int *)(iVar2 + 0x5c) + 0xdc) == 0) {
      auVar6._8_8_ = auVar5._8_8_;
      auVar6._0_8_ = (double)auVar5._0_4_ + 100000.0;
      auVar5._4_12_ = auVar6._4_12_;
      auVar5._0_4_ = (float)auVar6._0_8_;
    }
    if (auVar5._0_4_ < local_8) {
      local_8 = auVar5._0_4_;
      local_c = iVar2;
    }
  } while( true );
}

