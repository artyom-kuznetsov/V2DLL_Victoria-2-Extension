// FUN_009959e0 @ 009959e0 body=[[009959e0, 00995b79]]


void FUN_009959e0(char param_1,char param_2)

{
  int *piVar1;
  int in_EAX;
  
  (**(code **)(**(int **)(in_EAX + 100) + 0xe4))(*(int **)(in_EAX + 100),0x3c);
  (**(code **)(**(int **)(in_EAX + 100) + 0xe4))(*(int **)(in_EAX + 100),0x1b,1);
  (**(code **)(**(int **)(in_EAX + 100) + 0x10c))(*(int **)(in_EAX + 100),1,1,4);
  (**(code **)(**(int **)(in_EAX + 100) + 0x10c))(*(int **)(in_EAX + 100),1,4,1);
  (**(code **)(**(int **)(in_EAX + 100) + 0x10c))(*(int **)(in_EAX + 100),2,1,1);
  piVar1 = *(int **)(in_EAX + 100);
  if (param_2 == '\0') {
    (**(code **)(*piVar1 + 0x10c))(piVar1,0,2,1);
    (**(code **)(**(int **)(in_EAX + 100) + 0x10c))(*(int **)(in_EAX + 100),0,3,3);
    (**(code **)(**(int **)(in_EAX + 100) + 0x10c))(*(int **)(in_EAX + 100),0,5,1);
    (**(code **)(**(int **)(in_EAX + 100) + 0x10c))(*(int **)(in_EAX + 100),0,6,3);
    if (param_1 == '\0') {
      (**(code **)(**(int **)(in_EAX + 100) + 0x10c))(*(int **)(in_EAX + 100),0,1,7);
      return;
    }
  }
  else {
    (**(code **)(*piVar1 + 0x10c))(piVar1,0,2,2);
    (**(code **)(**(int **)(in_EAX + 100) + 0x10c))(*(int **)(in_EAX + 100),0,3,1);
    (**(code **)(**(int **)(in_EAX + 100) + 0x10c))(*(int **)(in_EAX + 100),0,5,2);
    (**(code **)(**(int **)(in_EAX + 100) + 0x10c))(*(int **)(in_EAX + 100),0,6,3);
    (**(code **)(**(int **)(in_EAX + 100) + 0x10c))(*(int **)(in_EAX + 100),1,2,1);
    (**(code **)(**(int **)(in_EAX + 100) + 0x10c))(*(int **)(in_EAX + 100),1,3,3);
    if (param_1 == '\0') {
      (**(code **)(**(int **)(in_EAX + 100) + 0x10c))(*(int **)(in_EAX + 100),1,1,7);
      return;
    }
  }
  (**(code **)(**(int **)(in_EAX + 100) + 0x10c))(*(int **)(in_EAX + 100),0,1,4);
  (**(code **)(**(int **)(in_EAX + 100) + 0x10c))(*(int **)(in_EAX + 100),0,4,4);
  return;
}

