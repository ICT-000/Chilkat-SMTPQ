
# Chilkat SMTPQ

This repo provides Visual Studio 2011 C++ and C# projects for the Chilkat SMTPQ Windows Service.  


## What is Included

### SmtpQ_Projects.sln

This is the Visual Studio 2011 solution that contains the individual projects:

1. **SmtpQService** -- This is the SMTPQ Windows service, which can be built for 32-bit or 64-bit.
2. **TestSmtpQ** -- This is a project for testing and debugging the SMTPQ service code.
3. **ServiceManage** -- A C# project for installing, starting, stopping, and uninstalling any Windows Service.
4. **SmtpQConfigure** -- A C# project for managing the Windows registry entries associated with the SMTPQ service.


### ChilkatLib

The Chilkat C++ headers and static libs are located under this directory.  The ChilkatSmtpQ service must link with the Chilkat libs.  

### bin

The **bin** directory contains the executables produced when building any of the projects.

### Chilkat License Required -- Insert Unlock Code in svc.cpp

The SMTPQ service requires a purchased unlock code to be inserted in the svc.cpp source file.
The following line must be modified:

`
const char *g_UnlockCode = "Anything for 30-day trial.";`






