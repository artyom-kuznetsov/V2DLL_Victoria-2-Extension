// Destructor @ 00ac4515 body=[[00ac4515, 00ac453c]]


/* Library Function - Multiple Matches With Same Base Name
    public: void __thiscall HeapManager::Destructor(void)
    public: void __thiscall _HeapManager::Destructor(void)
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

void Destructor(void)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 4) != 0) {
    while (*(int *)(in_ECX + 0xc) = *(int *)(in_ECX + 8), *(int *)(in_ECX + 8) != 0) {
      *(undefined4 *)(in_ECX + 8) = **(undefined4 **)(in_ECX + 0xc);
      (**(code **)(in_ECX + 4))(*(undefined4 *)(in_ECX + 0xc));
    }
  }
  return;
}

