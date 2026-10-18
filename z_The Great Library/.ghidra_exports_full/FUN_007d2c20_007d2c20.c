// FUN_007d2c20 @ 007d2c20 body=[[007d2c20, 007d2d08] [007d2d0c, 007d2d12]]


void FUN_007d2c20(void)

{
  void *pvVar1;
  int *piVar2;
  int *piVar3;
  undefined4 *in_EAX;
  
  *in_EAX = CBeachManager::vftable;
  FUN_004be200();
  FUN_009bcda0();
  FUN_009bcda0();
  FUN_009bcda0();
  pvVar1 = (void *)in_EAX[6];
  if (pvVar1 != (void *)0x0) {
    _eh_vector_destructor_iterator_(pvVar1,0x10,*(int *)((int)pvVar1 + -4),FUN_00aa8540);
    FUN_00aaea59((int)pvVar1 + -4);
  }
  pvVar1 = (void *)in_EAX[9];
  if (pvVar1 != (void *)0x0) {
    _eh_vector_destructor_iterator_(pvVar1,0x24,*(int *)((int)pvVar1 + -4),FUN_009f95e0);
    FUN_00aaea59((int)pvVar1 + -4);
  }
  piVar2 = (int *)in_EAX[8];
  if (piVar2 != (int *)0x0) {
    piVar3 = (int *)*piVar2;
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 8))(piVar3);
    }
    piVar3 = (int *)piVar2[1];
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 8))(piVar3);
    }
    piVar3 = (int *)piVar2[2];
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 8))(piVar3);
    }
    piVar2[2] = 0;
    *piVar2 = 0;
    piVar2[1] = 0;
    piVar2[3] = 0;
    piVar2[4] = 0;
    piVar2[7] = 0;
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(piVar2);
  }
  return;
}

