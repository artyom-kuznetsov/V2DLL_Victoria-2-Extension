// FUN_0099d8b0 @ 0099d8b0 body=[[0099d8b0, 0099d939] [0099d942, 0099d97e]]


void FUN_0099d8b0(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int in_EAX;
  float10 fVar4;
  
  fVar4 = (float10)(**(code **)(**(int **)(in_EAX + 0x6bd68) + 0x14))();
  piVar1 = *(int **)(in_EAX + 0x6bd58);
  *(undefined1 *)(in_EAX + 0x6bd64) = 1;
  do {
    if (piVar1 == (int *)0x0) {
      FUN_0099e6c0();
      return;
    }
    if ((char)((int *)*piVar1)[0x14] == '\0') {
      (**(code **)(*(int *)*piVar1 + 0x54))((float)fVar4 - (float)piVar1[2]);
    }
    else {
      FUN_009962f0(piVar1[1]);
      if (*(char *)(in_EAX + 0x6bd64) == '\0') {
        iVar2 = piVar1[3];
        iVar3 = piVar1[4];
        if (iVar2 != 0) {
          *(int *)(iVar2 + 0x10) = iVar3;
        }
        if (iVar3 != 0) {
          *(int *)(iVar3 + 0xc) = iVar2;
        }
        if (piVar1 == *(int **)(in_EAX + 0x6bd58)) {
          *(int *)(in_EAX + 0x6bd58) = iVar3;
        }
        if (piVar1 == *(int **)(in_EAX + 0x6bd5c)) {
          *(int *)(in_EAX + 0x6bd5c) = iVar2;
        }
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(piVar1);
      }
      *(undefined1 *)(piVar1 + 5) = 1;
    }
    piVar1 = (int *)piVar1[4];
  } while( true );
}

