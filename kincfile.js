let project = new Project('ezc');

project.kore = false;
project.addIncludeDir('cr');

project.addFiles('Sources/**');

project.setDebugDir('Deployment');
resolve(project);
