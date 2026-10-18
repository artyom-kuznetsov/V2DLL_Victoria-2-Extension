// FUN_0085c5b0 @ 0085c5b0 body=[[0085c5b0, 0085c6de]]


void FUN_0085c5b0(int *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  
  piVar1 = (int *)*param_1;
  iVar5 = 1000;
  do {
    if (piVar1 == (int *)0x0) {
      return;
    }
    iVar2 = *piVar1;
    iVar4 = *(int *)(iVar2 + 0x10);
    if (piVar1 == (int *)*param_1) {
      if (iVar4 < 0x191) {
        return;
      }
      iVar5 = iVar4 * 1000;
      if (iVar5 + 0x189373U < 0x39580e) {
        iVar5 = (iVar4 * 1000000) / 400000;
      }
      else {
        uVar6 = __allmul(iVar5,iVar5 >> 0x1f,1000,0);
        iVar5 = __alldiv(uVar6,400000,0);
      }
      if (iVar5 < 0) {
        iVar5 = 100000;
      }
      *(undefined4 *)(iVar2 + 0x10) = 400;
    }
    else {
      iVar3 = iVar4 * 1000;
      if (iVar5 == 0) {
        iVar4 = -1;
      }
      else if (iVar3 + 0x189373U < 0x39580e) {
        iVar4 = (iVar4 * 1000000) / iVar5;
      }
      else {
        uVar6 = __allmul(iVar3,iVar3 >> 0x1f,1000,0);
        iVar4 = __alldiv(uVar6,iVar5,iVar5 >> 0x1f);
      }
      FUN_00401000(0x43fa4001);
      iVar3 = FUN_00b31c00();
      *(int *)(iVar2 + 0x10) = (iVar3 + iVar4) / 1000;
    }
    piVar1 = (int *)piVar1[2];
  } while( true );
}

