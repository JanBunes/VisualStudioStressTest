# VisualStudioStressTest

With problems of reliable test execution in Visual Studio and being unable to give our product code to MS to try and reproduce this is a small project to explorer the Test Explorer/CMAKE/Gtest execution reliability to share in support tickets.

Run with Visual Studio and Gtest adapter settings for parallel test execution (according to CPU capability):

![image](https://user-images.githubusercontent.com/2736196/180735797-756aef4c-dbaf-4066-a5dd-7f21fb056f26.png)

After multiple attempts a test execution error will occur such as:
```
========== Starting test run ==========
Visual Studio version: VS2022
Test Adapter for Google Test: Test execution starting…
Solution settings: AdditionalTestDiscoveryParam: ‘’, AdditionalTestExecutionParam: ‘’, BatchForTestSetup: ‘’, BatchForTestTeardown: ‘’, BreakOnFailure: False, CatchExceptions: True, DebugMode: True, KillProcessesOnCancel: False, MaxNrOfThreads: 24, NrOfTestRepetitions: 1, ParallelTestExecution: True, ParseSymbolInformation: True, PathExtension: ‘’, PrintTestOutput: True, RunDisabledTests: False, ShowReleaseNotes: False, ShuffleTests: False, ShuffleTestsSeed: 0, TestDiscoveryRegex: ‘’, TestDiscoveryTimeoutInSeconds: 30, TestNameSeparator: ‘’, TestPropertySettingsContainer: GoogleTestAdapter.TestAdapter.Settings.TestPropertySettingsContainer, TimestampOutput: False, TraitsRegexesAfter: {}, TraitsRegexesBefore: {}, UseNewTestExecutionFramework: True, WorkingDir: ‘$(ExecutableDir)’
No test case filter provided
Running 7953 tests…
ERROR: Exception while running tests: System.InvalidOperationException: There is an error in XML document (5739, 42). —> System.Xml.XmlException: There is an unclosed literal string. Line 5739, position 42.
at System.Xml.XmlTextReaderImpl.Throw(Exception e)
at System.Xml.XmlTextReaderImpl.ParseAttributeValueSlow(Int32 curPos, Char quoteChar, NodeData attr)
at System.Xml.XmlTextReaderImpl.ParseAttributes()
at System.Xml.XmlTextReaderImpl.ParseElement()
at System.Xml.XmlTextReaderImpl.ParseElementContent()
at System.Xml.XsdValidatingReader.Read()
at System.Xml.XmlReader.MoveToContent()
at Microsoft.Xml.Serialization.GeneratedAssembly.XmlSerializationReaderGtaTestDurations.Read3_GtaTestDurations(Boolean isNullable, Boolean checkType)
at Microsoft.Xml.Serialization.GeneratedAssembly.XmlSerializationReaderGtaTestDurations.Read4_GtaTestDurations()
— End of inner exception stack trace —
at System.Xml.Serialization.XmlSerializer.Deserialize(XmlReader xmlReader, String encodingStyle, XmlDeserializationEvents events)
at GoogleTestAdapter.Scheduling.TestDurationSerializer.LoadTestDurations(String durationsFile)
at GoogleTestAdapter.Scheduling.TestDurationSerializer.ReadTestDurations(String executable, List1 testcases)    at GoogleTestAdapter.Scheduling.TestDurationSerializer.ReadTestDurations(IEnumerable1 testcases)
at GoogleTestAdapter.Runners.ParallelTestRunner.GetTestsSplitter(TestCase[] testCasesToRun)
at GoogleTestAdapter.Runners.ParallelTestRunner.RunTests(IEnumerable1 testCasesToRun, String baseDir, List1 threads, Boolean isBeingDebugged, IDebuggedProcessLauncher debuggedLauncher, IProcessExecutor executor)
at GoogleTestAdapter.Runners.ParallelTestRunner.RunTests(IEnumerable1 testCasesToRun, String baseDir, String workingDir, String userParameters, Boolean isBeingDebugged, IDebuggedProcessLauncher debuggedLauncher, IProcessExecutor executor)    at GoogleTestAdapter.GoogleTestExecutor.RunTests(IEnumerable1 testCasesToRun, ITestFrameworkReporter reporter, IDebuggedProcessLauncher launcher, Boolean isBeingDebugged, String solutionDirectory, IProcessExecutor executor)
at GoogleTestAdapter.TestAdapter.TestExecutor.DoRunTests(ICollection1 testCasesToRun, IRunContext runContext, IFrameworkHandle frameworkHandle)    at GoogleTestAdapter.TestAdapter.TestExecutor.TryRunTests(IEnumerable1 vsTestCasesToRun, IRunContext runContext, IFrameworkHandle frameworkHandle)
at GoogleTestAdapter.TestAdapter.TestExecutor.RunTests(IEnumerable`1 vsTestCasesToRun, IRunContext runContext, IFrameworkHandle frameworkHandle)
ERROR:
The following errors and warnings have occured during test execution :
ERROR: Exception while running tests: System.InvalidOperationException: There is an error in XML document (5739, 42). —> System.Xml.XmlException: There is an unclosed literal string. Line 5739, position 42.
at System.Xml.XmlTextReaderImpl.Throw(Exception e)
at System.Xml.XmlTextReaderImpl.ParseAttributeValueSlow(Int32 curPos, Char quoteChar, NodeData attr)
at System.Xml.XmlTextReaderImpl.ParseAttributes()
at System.Xml.XmlTextReaderImpl.ParseElement()
at System.Xml.XmlTextReaderImpl.ParseElementContent()
at System.Xml.XsdValidatingReader.Read()
at System.Xml.XmlReader.MoveToContent()
at Microsoft.Xml.Serialization.GeneratedAssembly.XmlSerializationReaderGtaTestDurations.Read3_GtaTestDurations(Boolean isNullable, Boolean checkType)
at Microsoft.Xml.Serialization.GeneratedAssembly.XmlSerializationReaderGtaTestDurations.Read4_GtaTestDurations()
— End of inner exception stack trace —
at System.Xml.Serialization.XmlSerializer.Deserialize(XmlReader xmlReader, String encodingStyle, XmlDeserializationEvents events)
at GoogleTestAdapter.Scheduling.TestDurationSerializer.LoadTestDurations(String durationsFile)
at GoogleTestAdapter.Scheduling.TestDurationSerializer.ReadTestDurations(String executable, List1 testcases)    at GoogleTestAdapter.Scheduling.TestDurationSerializer.ReadTestDurations(IEnumerable1 testcases)
at GoogleTestAdapter.Runners.ParallelTestRunner.GetTestsSplitter(TestCase[] testCasesToRun)
at GoogleTestAdapter.Runners.ParallelTestRunner.RunTests(IEnumerable1 testCasesToRun, String baseDir, List1 threads, Boolean isBeingDebugged, IDebuggedProcessLauncher debuggedLauncher, IProcessExecutor executor)
at GoogleTestAdapter.Runners.ParallelTestRunner.RunTests(IEnumerable1 testCasesToRun, String baseDir, String workingDir, String userParameters, Boolean isBeingDebugged, IDebuggedProcessLauncher debuggedLauncher, IProcessExecutor executor)    at GoogleTestAdapter.GoogleTestExecutor.RunTests(IEnumerable1 testCasesToRun, ITestFrameworkReporter reporter, IDebuggedProcessLauncher launcher, Boolean isBeingDebugged, String solutionDirectory, IProcessExecutor executor)
at GoogleTestAdapter.TestAdapter.TestExecutor.DoRunTests(ICollection1 testCasesToRun, IRunContext runContext, IFrameworkHandle frameworkHandle)    at GoogleTestAdapter.TestAdapter.TestExecutor.TryRunTests(IEnumerable1 vsTestCasesToRun, IRunContext runContext, IFrameworkHandle frameworkHandle)
at GoogleTestAdapter.TestAdapter.TestExecutor.RunTests(IEnumerable`1 vsTestCasesToRun, IRunContext runContext, IFrameworkHandle frameworkHandle)
========== Test run finished: 0 Tests (0 Passed, 0 Failed, 0 Skipped) run in 120 ms ==========
```

