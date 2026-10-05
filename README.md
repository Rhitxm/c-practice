<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">

    <title>C Practice Lab | Rhitam × Atharv</title>

    <link rel="stylesheet" href="style.css">

    <link rel="preconnect" href="https://fonts.googleapis.com">
    <link rel="preconnect" href="https://fonts.gstatic.com" crossorigin>

    <link href="https://fonts.googleapis.com/css2?family=Inter:wght@400;500;600;700;800&family=JetBrains+Mono:wght@400;500;600&display=swap" rel="stylesheet">
</head>

<body>

    <!-- Background -->
    <div class="background"></div>

    <!-- Navigation -->
    <header>
        <nav class="navbar">

            <div class="logo">
                <span>&lt;/&gt;</span> C Practice Lab
            </div>

            <div class="nav-links">
                <a href="#about">About</a>
                <a href="#learning">Learning</a>
                <a href="#progress">Progress</a>
                <a href="#structure">Structure</a>
            </div>

            <a href="#github" class="github-btn">
                GitHub ↗
            </a>

        </nav>
    </header>


    <!-- Hero -->
    <main>

        <section class="hero">

            <div class="hero-content">

                <div class="badge">
                    <span class="dot"></span>
                    Currently Learning C
                </div>

                <h1>
                    C Practice
                    <span>Lab.</span>
                </h1>

                <p class="hero-text">
                    Two friends. One repository.
                    <br>
                    Hundreds of bugs to fix.
                </p>

                <p class="description">
                    A collaborative space where Rhitam and Atharv
                    practice C programming, solve problems, debug
                    code and build projects together.
                </p>

                <div class="hero-buttons">
                    <a href="#learning" class="primary-btn">
                        Explore Repository ↓
                    </a>

                    <a href="#about" class="secondary-btn">
                        Meet the Team
                    </a>
                </div>

            </div>


            <!-- Terminal -->
            <div class="terminal">

                <div class="terminal-header">
                    <div class="terminal-dots">
                        <span></span>
                        <span></span>
                        <span></span>
                    </div>

                    <p>practice.c</p>
                </div>

                <div class="terminal-body">

                    <span class="code-comment">
                        // Our daily routine
                    </span>

                    <span>
                        <b class="keyword">while</b>
                        (<span class="variable">bugs</span> &gt; 0) {
                    </span>

                    <span class="indent">
                        write_code();
                    </span>

                    <span class="indent">
                        compile();
                    </span>

                    <span class="indent">
                        <b class="keyword">if</b> (error)
                    </span>

                    <span class="indent-2">
                        debug();
                    </span>

                    <span class="indent">
                        learn();
                    </span>

                    <span>
                        }
                    </span>

                    <span class="cursor">▋</span>

                </div>

            </div>

        </section>


        <!-- Team -->
        <section id="about" class="section">

            <div class="section-heading">
                <p class="section-number">01 / THE TEAM</p>

                <h2>
                    Built by <span>two learners.</span>
                </h2>

                <p>
                    Learning together makes debugging slightly less painful.
                </p>
            </div>


            <div class="team-grid">

                <div class="team-card">

                    <div class="avatar">R</div>

                    <div>
                        <h3>Rhitam</h3>
                        <p class="role">Developer</p>
                    </div>

                    <div class="skills">
                        <span>C</span>
                        <span>Web Dev</span>
                        <span>Competitive Programming</span>
                    </div>

                </div>


                <div class="team-card">

                    <div class="avatar">A</div>

                    <div>
                        <h3>Atharv</h3>
                        <p class="role">Developer</p>
                    </div>

                    <div class="skills">
                        <span>C</span>
                        <span>Python</span>
                        <span>Problem Solving</span>
                    </div>

                </div>

            </div>

        </section>


        <!-- Learning -->
        <section id="learning" class="section">

            <div class="section-heading">
                <p class="section-number">02 / LEARNING PATH</p>

                <h2>
                    What we're <span>learning.</span>
                </h2>

                <p>
                    From basic syntax to algorithms and data structures.
                </p>
            </div>


            <div class="learning-grid">

                <div class="learning-card">
                    <div class="icon">01</div>
                    <h3>Basics</h3>
                    <p>Variables, data types, input/output and operators.</p>
                </div>

                <div class="learning-card">
                    <div class="icon">02</div>
                    <h3>Control Flow</h3>
                    <p>If/else, switch statements and loops.</p>
                </div>

                <div class="learning-card">
                    <div class="icon">03</div>
                    <h3>Functions</h3>
                    <p>Functions, arguments, return values and recursion.</p>
                </div>

                <div class="learning-card">
                    <div class="icon">04</div>
                    <h3>Arrays</h3>
                    <p>1D arrays, 2D arrays and matrix problems.</p>
                </div>

                <div class="learning-card">
                    <div class="icon">05</div>
                    <h3>Strings</h3>
                    <p>Character arrays and string manipulation.</p>
                </div>

                <div class="learning-card">
                    <div class="icon">06</div>
                    <h3>Pointers</h3>
                    <p>Pointers, arrays, functions and pointer arithmetic.</p>
                </div>

                <div class="learning-card">
                    <div class="icon">07</div>
                    <h3>Structures</h3>
                    <p>Struct, typedef and nested structures.</p>
                </div>

                <div class="learning-card">
                    <div class="icon">08</div>
                    <h3>Advanced</h3>
                    <p>Dynamic memory, files, DSA and algorithms.</p>
                </div>

            </div>

        </section>


        <!-- Progress -->
        <section id="progress" class="section">

            <div class="section-heading">
                <p class="section-number">03 / PROGRESS</p>

                <h2>
                    Getting <span>better.</span>
                </h2>

                <p>
                    Progress is slow until suddenly it isn't.
                </p>
            </div>


            <div class="progress-box">

                <div class="progress-item">
                    <div class="progress-info">
                        <span>C Basics</span>
                        <strong>100%</strong>
                    </div>

                    <div class="progress-bar">
                        <div class="progress-fill full"></div>
                    </div>
                </div>


                <div class="progress-item">
                    <div class="progress-info">
                        <span>Conditionals</span>
                        <strong>100%</strong>
                    </div>

                    <div class="progress-bar">
                        <div class="progress-fill full"></div>
                    </div>
                </div>


                <div class="progress-item">
                    <div class="progress-info">
                        <span>Loops</span>
                        <strong>100%</strong>
                    </div>

                    <div class="progress-bar">
                        <div class="progress-fill full"></div>
                    </div>
                </div>


                <div class="progress-item">
                    <div class="progress-info">
                        <span>Functions</span>
                        <strong>70%</strong>
                    </div>

                    <div class="progress-bar">
                        <div class="progress-fill seventy"></div>
                    </div>
                </div>


                <div class="progress-item">
                    <div class="progress-info">
                        <span>Arrays</span>
                        <strong>60%</strong>
                    </div>

                    <div class="progress-bar">
                        <div class="progress-fill sixty"></div>
                    </div>
                </div>


                <div class="progress-item">
                    <div class="progress-info">
                        <span>Pointers</span>
                        <strong>25%</strong>
                    </div>

                    <div class="progress-bar">
                        <div class="progress-fill twenty-five"></div>
                    </div>
                </div>

            </div>

        </section>


        <!-- Repository Structure -->
        <section id="structure" class="section">

            <div class="section-heading">
                <p class="section-number">04 / REPOSITORY</p>

                <h2>
                    Inside the <span>repository.</span>
                </h2>
            </div>


            <div class="file-tree">

                <div class="tree-line root">
                    📁 C-Practice
                </div>

                <div class="tree-line">
                    ├── 📁 01_Basics
                </div>

                <div class="tree-line">
                    │ &nbsp;&nbsp;├── 📄 hello_world.c
                </div>

                <div class="tree-line">
                    │ &nbsp;&nbsp;├── 📄 calculator.c
                </div>

                <div class="tree-line">
                    │ &nbsp;&nbsp;└── 📄 temperature.c
                </div>

                <div class="tree-line">
                    ├── 📁 02_Conditionals
                </div>

                <div class="tree-line">
                    ├── 📁 03_Loops
                </div>

                <div class="tree-line">
                    ├── 📁 04_Functions
                </div>

                <div class="tree-line">
                    ├── 📁 05_Arrays
                </div>

                <div class="tree-line">
                    ├── 📁 06_Strings
                </div>

                <div class="tree-line">
                    ├── 📁 07_Pointers
                </div>

                <div class="tree-line">
                    ├── 📁 08_Structures
                </div>

                <div class="tree-line">
                    ├── 📁 09_File_Handling
                </div>

                <div class="tree-line">
                    └── 📁 10_Mini_Projects
                </div>

            </div>

        </section>


        <!-- Philosophy -->
        <section class="quote-section">

            <div class="quote">
                <span>"</span>

                The compiler isn't your enemy.
                <br>
                It's your most honest teacher.

                <span>"</span>
            </div>

        </section>


        <!-- Footer -->
        <footer id="github">

            <div class="footer-logo">
                ⚡ Rhitam × Atharv
            </div>

            <p>
                Learning C one bug at a time.
            </p>

            <div class="footer-links">
                <a href="#">GitHub</a>
                <a href="#">Problems</a>
                <a href="#">Projects</a>
            </div>

            <p class="copyright">
                © 2026 C Practice Lab
            </p>

        </footer>

    </main>

</body>
</html>
