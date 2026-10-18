// FUN_005dbb50 @ 005dbb50 body=[[005dbb50, 005dbd86]]


uint FUN_005dbb50(int *param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  char cVar5;
  int *in_EAX;
  
  if ((param_1 != (int *)0x0) && (in_EAX[2] != 0)) {
    piVar1 = (int *)*in_EAX;
    while( true ) {
      if (piVar1 == (int *)0x0) {
        return 1;
      }
      piVar2 = (int *)*piVar1;
      piVar3 = (int *)piVar2[0x37];
      in_EAX = piVar1;
      if ((((((((char)piVar2[0x59] != '\0') || ((char)param_1[0x59] != '\0')) || (param_1 == piVar2)
             ) || ((in_EAX = (int *)piVar2[0x31], in_EAX == (int *)param_1[0x31] ||
                   ((char)piVar2[0x41] != '\0')))) || ((char)param_1[0x41] != '\0')) ||
          ((((((cVar5 = (**(code **)(*piVar2 + 0x38))(), cVar5 != '\0' &&
               (in_EAX = (int *)(**(code **)(*param_1 + 0x38))(), (char)in_EAX == '\0')) ||
              ((cVar5 = (**(code **)(*piVar2 + 0x3c))(), cVar5 != '\0' &&
               (in_EAX = (int *)(**(code **)(*param_1 + 0x3c))(), (char)in_EAX == '\0')))) ||
             ((cVar5 = (**(code **)(*piVar2 + 0x40))(), cVar5 != '\0' &&
              (in_EAX = (int *)(**(code **)(*param_1 + 0x40))(), (char)in_EAX == '\0')))) ||
            ((in_EAX = (int *)(**(code **)(*piVar2 + 0x38))(), (char)in_EAX != '\0' &&
             (*(char *)(piVar3[0x17] + 0x2a) == '\0')))) ||
           ((((cVar5 = (**(code **)(*piVar2 + 0x38))(), cVar5 != '\0' && (piVar2[0x3b] < 1)) &&
             (in_EAX = (int *)(**(code **)(*piVar2 + 0x2c))(), in_EAX[0x6d] != 0)) ||
            (((cVar5 = (**(code **)(*param_1 + 0x38))(), cVar5 != '\0' && (param_1[0x3b] < 1)) &&
             (in_EAX = (int *)(**(code **)(*param_1 + 0x2c))(), in_EAX[0x6d] != 0)))))))) ||
         ((in_EAX = (int *)FUN_005cc160(), (char)in_EAX == '\0' ||
          ((*(char *)(piVar3[0x17] + 0x2a) != '\0' &&
           (in_EAX = (int *)(**(code **)(*piVar2 + 0x3c))(), (char)in_EAX != '\0')))))) break;
      iVar4 = *(int *)(*(int *)(DAT_012587e4 + 4) + piVar2[0x31] * 4);
      if (((param_1[0x31] == *(int *)(iVar4 + 0x20)) ||
          (((*(int *)(*(int *)(*(int *)(iVar4 + 0xbe8) + param_1[0x31] * 4) + 0x34) == 0 &&
            ((((char)param_1[0x30] != 'R' || (*(char *)((int)param_1 + 0xc1) != 'E')) ||
             (*(char *)((int)param_1 + 0xc2) != 'B')))) &&
           (((*(char *)(iVar4 + 0x1c) != 'R' || (*(char *)(iVar4 + 0x1d) != 'E')) ||
            (*(char *)(iVar4 + 0x1e) != 'B')))))) &&
         ((in_EAX = piVar3, piVar3[0x4b] != 0 ||
          (in_EAX = (int *)FUN_005192a0(*(undefined4 *)
                                         (*(int *)(DAT_012587e4 + 4) + piVar2[0x31] * 4)),
          (char)in_EAX == '\0')))) break;
      piVar1 = (int *)piVar1[2];
    }
  }
  return (uint)in_EAX & 0xffffff00;
}

