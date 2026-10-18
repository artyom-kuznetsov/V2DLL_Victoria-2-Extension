// FUN_0073d340 @ 0073d340 body=[[0073d340, 0073d3d6] [0073d3e4, 0073d3fc] [0073d400, 0073d477] [0073d47b, 0073d49c]]


void FUN_0073d340(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b52e7f;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *in_ECX = CProvinceView::vftable;
  local_8 = 0xd;
  (**(code **)(*(int *)in_ECX[8] + 0x50))();
  in_ECX[8] = 0;
  if ((undefined4 *)in_ECX[0xb] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)in_ECX[0xb])(1);
    in_ECX[0xb] = 0;
  }
  if (in_ECX[0x90] != 0) {
    FUN_0073d4a0();
    in_ECX[0x90] = 0;
  }
  puVar1 = (undefined4 *)in_ECX[0x91];
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[0x2b] = CButtonObserver::vftable;
    puVar1[0x20] = CButtonObserver::vftable;
    puVar1[0x18] = CCheckBoxObserver::vftable;
    puVar1[0x10] = CCheckBoxObserver::vftable;
    puVar1[8] = CCheckBoxObserver::vftable;
    *puVar1 = CCheckBoxObserver::vftable;
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(puVar1);
  }
  iVar2 = in_ECX[10];
  if (iVar2 != 0) {
    FUN_00748c40(iVar2);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(iVar2);
  }
  in_ECX[10] = 0;
  in_ECX[0x84] = CButtonObserver::vftable;
  in_ECX[0x7c] = CCheckBoxObserver::vftable;
  in_ECX[0x74] = CCheckBoxObserver::vftable;
  in_ECX[0x6c] = CCheckBoxObserver::vftable;
  in_ECX[100] = CCheckBoxObserver::vftable;
  in_ECX[0x59] = CButtonObserver::vftable;
  in_ECX[0x4e] = CButtonObserver::vftable;
  in_ECX[0x43] = CButtonObserver::vftable;
  in_ECX[0x38] = CButtonObserver::vftable;
  in_ECX[0x2d] = CButtonObserver::vftable;
  in_ECX[0x22] = CButtonObserver::vftable;
  in_ECX[0x17] = CButtonObserver::vftable;
  in_ECX[0xc] = CButtonObserver::vftable;
  *in_ECX = &PTR___purecall_00e38700;
  local_8 = 0xe;
  FUN_009a4ca0();
  if (0xf < (uint)in_ECX[6]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[1]);
  }
  in_ECX[6] = 0xf;
  in_ECX[5] = 0;
  *(undefined1 *)(in_ECX + 1) = 0;
  ExceptionList = local_10;
  return;
}

