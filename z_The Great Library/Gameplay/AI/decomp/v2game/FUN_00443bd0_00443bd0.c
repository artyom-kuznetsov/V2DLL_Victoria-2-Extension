// FUN_00443bd0 @ 00443bd0 body=[[00443bd0, 00443c72]]


void FUN_00443bd0(void)

{
  int *piVar1;
  void *_Dst;
  int in_EAX;
  int iVar2;
  int iVar3;
  int *piVar4;
  int local_8;
  
  piVar4 = (int *)(in_EAX + 0x54);
  local_8 = 5;
  do {
    iVar3 = 0;
    iVar2 = piVar4[1] - *piVar4 >> 2;
    if (0 < iVar2) {
      do {
        piVar1 = *(int **)(*piVar4 + iVar3 * 4);
        (**(code **)(*piVar1 + 0x14))();
        if (((undefined4 *)piVar1[5] != (undefined4 *)0x0) && (*(char *)((int)piVar1 + 0xd) != '\0')
           ) {
          (*(code *)**(undefined4 **)piVar1[5])(piVar1,0);
        }
        *(undefined1 *)((int)piVar1 + 0xd) = 0;
        piVar1[5] = 0;
        if ((int *)piVar1[4] != (int *)0x0) {
          (**(code **)(*(int *)piVar1[4] + 0x24))();
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < iVar2);
    }
    _Dst = (void *)*piVar4;
    if (_Dst != (void *)piVar4[1]) {
      FID_conflict__memcpy(_Dst,(void *)piVar4[1],0);
      piVar4[1] = (int)_Dst;
    }
    piVar4 = piVar4 + 4;
    local_8 = local_8 + -1;
  } while (local_8 != 0);
  return;
}

