// FUN_009d0de0 @ 009d0de0 body=[[009d0de0, 009d0ed0]]


void FUN_009d0de0(int param_1)

{
  undefined4 *in_EAX;
  int in_EDX;
  
  if (in_EDX < 0x9f) {
    if (in_EDX == 0x9e) {
      FUN_00408ed0(in_EAX,0,0xffffffff);
      return;
    }
    switch(in_EDX) {
    case 0x2e:
      *(undefined4 *)(param_1 + 0xa8) = *in_EAX;
      *(undefined4 *)(param_1 + 0xac) = in_EAX[1];
      return;
    case 0x4b:
      *(undefined4 *)(param_1 + 0xa0) = *in_EAX;
      *(undefined4 *)(param_1 + 0xa4) = in_EAX[1];
      return;
    case 0x84:
      FUN_00408ed0(in_EAX,0,0xffffffff);
      return;
    case 0x8a:
      *(undefined4 *)(param_1 + 0x124) = *in_EAX;
      return;
    case 0x99:
switchD_009d0e03_caseD_99:
      FUN_00408ed0(in_EAX,0,0xffffffff);
      return;
    }
  }
  else {
    switch(in_EDX) {
    case 0x9f:
      FUN_00408ed0(in_EAX,0,0xffffffff);
      return;
    case 0xa3:
      FUN_00408ed0(in_EAX,0,0xffffffff);
      break;
    case 0xa4:
      FUN_00408ed0(in_EAX,0,0xffffffff);
      return;
    case 0x167:
      goto switchD_009d0e03_caseD_99;
    }
  }
  return;
}

