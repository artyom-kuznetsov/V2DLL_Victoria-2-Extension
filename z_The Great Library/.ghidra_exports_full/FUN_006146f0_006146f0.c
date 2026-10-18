// FUN_006146f0 @ 006146f0 body=[[006146f0, 00614773] [00614777, 00614797] [0061479b, 006147ba] [006147be, 00614800]]


void FUN_006146f0(void)

{
  undefined4 *puVar1;
  undefined4 *in_ECX;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b3f784;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *in_ECX = CCreditsScreen::vftable;
  local_8 = 4;
  piVar3 = in_ECX + 0x24;
  iVar2 = 0x23;
  do {
    if (*piVar3 != 0) {
      (**(code **)(*(int *)*piVar3 + 0x30))();
    }
    piVar3 = piVar3 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  if ((int *)in_ECX[0x8d] != (int *)0x0) {
    (**(code **)(*(int *)in_ECX[0x8d] + 0x50))();
  }
  puVar4 = (undefined4 *)in_ECX[0x1f];
  if (puVar4 == (undefined4 *)0x0) {
    in_ECX[0x1f] = 0;
    in_ECX[0x20] = 0;
    in_ECX[0x21] = 0;
    if ((uint)in_ECX[0x1a] < 0x10) {
      in_ECX[0x1a] = 0xf;
      in_ECX[0x19] = 0;
      *(undefined1 *)(in_ECX + 0x15) = 0;
      local_8 = CONCAT31(local_8._1_3_,1);
      if ((undefined4 *)in_ECX[0x10] != (undefined4 *)0x0) {
        (*(code *)**(undefined4 **)in_ECX[0x10])(1);
      }
      in_ECX[5] = CButtonObserver::vftable;
      *in_ECX = CFrontEndView::vftable;
      ExceptionList = local_10;
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[0x15]);
  }
  puVar1 = (undefined4 *)in_ECX[0x20];
  while( true ) {
    if (puVar4 == puVar1) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(in_ECX[0x1f]);
    }
    if (0xf < (uint)puVar4[5]) break;
    puVar4[5] = 0xf;
    puVar4[4] = 0;
    *(undefined1 *)puVar4 = 0;
    puVar4 = puVar4 + 8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(*puVar4);
}

